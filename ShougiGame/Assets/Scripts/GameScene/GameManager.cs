using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public enum SelectMode
    {
        ModePiece,
        ModeSquere,
        ModeIsPromote
    }

    // マス情報
    [SerializeField] private GameObject m_squere1 = default;
    [SerializeField] private GameObject m_squere2 = default;
    private GameObject[,] m_squereArray = new GameObject[9, 9]; //座標系[左→右, 上→下]

    // コマ情報
    [SerializeField] private GameObject m_pieceOu = default;
    [SerializeField] private GameObject m_pieceKin = default;
    [SerializeField] private GameObject m_pieceGin = default;
    [SerializeField] private GameObject m_pieceKeima = default;
    [SerializeField] private GameObject m_pieceKyosha = default;
    [SerializeField] private GameObject m_pieceKaku = default;
    [SerializeField] private GameObject m_pieceHisha = default;
    [SerializeField] private GameObject m_pieceHu = default;
    private GameObject[,] m_pieceArray = new GameObject[9, 9]; //座標系[左→右, 上→下]

    //成る選択画面情報
    [SerializeField] private GameObject m_selectPromotionCanvas = default;

    //選択情報
    public SelectMode m_selectMode { get; private set; }
    private Piece m_selectedPiece;
    private Squere m_selectedSquere;
    private bool m_selectedIsPromoted;
    private PieceClass m_selectedPieceButtonClass;
    private bool m_isSelectedPieceButton;

    //ターン情報
    private Who m_whoseTurn = Who.One;

    //プレイヤー情報
    [SerializeField] private GameObject m_playerOneObject = default;
    [SerializeField] private GameObject m_playerTwoObject = default;
    private Player m_playerOne;
    private Player m_playerTwo;

    //オーディオ情報
    [SerializeField] private GameObject m_audioManagerObject = default;
    private AudioManager m_audioManager = default;

    void Awake()
    {
        //オブジェクト生成、初期化
        placeInitialSqueres();
        placeInitialPieces();
        initSelectedInfomation();
        m_playerOne = m_playerOneObject.GetComponent<Player>();
        m_playerTwo = m_playerTwoObject.GetComponent<Player>();
        m_audioManager = m_audioManagerObject.GetComponent<AudioManager>();
    }

    public void onSelectPiece(GameObject selectedPiece) {
        m_audioManager.playSelect();
        m_selectMode = SelectMode.ModeSquere;
        m_isSelectedPieceButton = false;
        m_selectedPiece = selectedPiece.GetComponent<Piece>();
        //移動先のマスを選択できるようにする
        List<Coordinate> destinationList = createDestinationList(m_selectedPiece);
        foreach (Coordinate destination in destinationList)
        {
            m_squereArray[destination.x, destination.y].GetComponent<MeshCollider>().enabled = true;
        }
    }

    public void onSelectPieceButton(PieceClass pieceClass) {
        m_audioManager.playSelect();
        if (m_selectMode != SelectMode.ModePiece) {
            return;
        }
        Player turnPlayer = (m_whoseTurn == Who.One ? m_playerOne : m_playerTwo);
        if (!turnPlayer.pullPiece(pieceClass)) {
            return;
        }
        m_selectMode = SelectMode.ModeSquere;
        m_isSelectedPieceButton = true;
        m_selectedPieceButtonClass = pieceClass;
        //配置先のマスを選択できるようにする
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (!m_pieceArray[j, i]) {
                    m_squereArray[j, i].GetComponent<MeshCollider>().enabled = true;
                }
            }
        }
    }

    public void onSelectSquere(GameObject selectedSquere) {
        m_audioManager.playSelect();
        m_selectedSquere = selectedSquere.GetComponent<Squere>();
        if (validatePromoiton()) {
            //相手陣を選択した時、成る選択画面を出す
            m_selectMode = SelectMode.ModeIsPromote;
            m_selectPromotionCanvas.SetActive(true);
        } else {
            //成れない時、選択完了
            m_selectedIsPromoted = false;
            onSelectInfo();
        }
    }

    public void initSelectedInfomation()
    {
        m_selectMode = SelectMode.ModePiece;
        m_selectedPiece = null;
        m_selectedSquere = null;
        m_selectedIsPromoted = false;
        if (m_isSelectedPieceButton) {
            m_isSelectedPieceButton = false;
            Player turnPlayer = (m_whoseTurn == Who.One ? m_playerOne : m_playerTwo);
            turnPlayer.pushPiece(m_selectedPieceButtonClass);
            m_selectedPieceButtonClass = default;
        }
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                m_squereArray[i, j].GetComponent<MeshCollider>().enabled = false;
            }
        }
        m_selectPromotionCanvas.SetActive(false);
    }
    
    public void onClickYesButton() {
        m_selectedIsPromoted = true;
        onSelectInfo();
    }

    public void onClickNoButton() {
        m_selectedIsPromoted = false;
        onSelectInfo();
    }

    private void placeInitialSqueres()
    {
        Who[,] whoseArray = new Who[,] {
            { Who.Two, Who.Two, Who.Two, Who.Two, Who.Two, Who.Two, Who.Two, Who.Two, Who.Two },
            { Who.Two, Who.Two, Who.Two, Who.Two, Who.Two, Who.Two, Who.Two, Who.Two, Who.Two },
            { Who.Two, Who.Two, Who.Two, Who.Two, Who.Two, Who.Two, Who.Two, Who.Two, Who.Two },
            { Who.No, Who.No, Who.No, Who.No, Who.No, Who.No, Who.No, Who.No, Who.No },
            { Who.No, Who.No, Who.No, Who.No, Who.No, Who.No, Who.No, Who.No, Who.No },
            { Who.No, Who.No, Who.No, Who.No, Who.No, Who.No, Who.No, Who.No, Who.No },
            { Who.One, Who.One, Who.One, Who.One, Who.One, Who.One, Who.One, Who.One, Who.One },
            { Who.One, Who.One, Who.One, Who.One, Who.One, Who.One, Who.One, Who.One, Who.One },
            { Who.One, Who.One, Who.One, Who.One, Who.One, Who.One, Who.One, Who.One, Who.One }
        };
        Vector3 leftUpPosition = new Vector3(-4, 0, 4);
        Vector3 diffPosition = new Vector3();
        for (int i = 0; i < 9; i++) {
            diffPosition.z = - i * m_squere1.transform.localScale.z * 10;
            for (int j = 0; j < 9; j++) {
                diffPosition.x = j * m_squere1.transform.localScale.z * 10;
                GameObject squere = ((i + j) % 2 == 0) ? m_squere1 : m_squere2;
                m_squereArray[j, i] = Instantiate(squere, leftUpPosition + diffPosition, Quaternion.identity);
                m_squereArray[j, i].GetComponent<Squere>().initialize(whoseArray[i, j], new Coordinate(j, i));
            }
        }
    }

    private void placeInitialPieces()
    {
        PieceClass[,] pieceClassArray = new PieceClass[,] {
            { PieceClass.Kyosha, PieceClass.Keima, PieceClass.Gin, PieceClass.Kin, PieceClass.Ou, PieceClass.Kin, PieceClass.Gin, PieceClass.Keima, PieceClass.Kyosha },
            { PieceClass.No, PieceClass.Hisha, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.Kaku, PieceClass.No },
            { PieceClass.Hu, PieceClass.Hu, PieceClass.Hu, PieceClass.Hu, PieceClass.Hu, PieceClass.Hu, PieceClass.Hu, PieceClass.Hu, PieceClass.Hu },
            { PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No },
            { PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No },
            { PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No },
            { PieceClass.Hu, PieceClass.Hu, PieceClass.Hu, PieceClass.Hu, PieceClass.Hu, PieceClass.Hu, PieceClass.Hu, PieceClass.Hu, PieceClass.Hu },
            { PieceClass.No, PieceClass.Kaku, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.No, PieceClass.Hisha, PieceClass.No },
            { PieceClass.Kyosha, PieceClass.Keima, PieceClass.Gin, PieceClass.Kin, PieceClass.Ou, PieceClass.Kin, PieceClass.Gin, PieceClass.Keima, PieceClass.Kyosha }
        };
        GameObject[] pieceArray = new GameObject[] {
            m_pieceOu,
            m_pieceKin,
            m_pieceGin,
            m_pieceKeima,
            m_pieceKyosha,
            m_pieceKaku,
            m_pieceHisha,
            m_pieceHu
        };
        Vector3 leftUpPosition = new Vector3(-4, 0, 4);
        Vector3 diffPosition = new Vector3();
        for (int i = 0; i < 9; i++) {
            diffPosition.z = - i * m_squere1.transform.localScale.z * 10;
            for (int j = 0; j < 9; j++) {
                diffPosition.x = j * m_squere1.transform.localScale.z * 10;
                if (pieceClassArray[i, j] != PieceClass.No) {
                    m_pieceArray[j, i] = Instantiate(pieceArray[(int)pieceClassArray[i, j]], leftUpPosition + diffPosition, Quaternion.identity);
                    m_pieceArray[j, i].GetComponent<Piece>().initialize(pieceClassArray[i, j], ((i > 5) ? Who.One : Who.Two), new Coordinate(j, i));
                    m_pieceArray[j, i].tag = ((i > 5) ? "OnesPiece" : "TwosPiece");
                }
            }
        }
    }

    private List<Coordinate> createDestinationList(Piece piece)
    {
        List<Coordinate> destinationList = new List<Coordinate>();
        switch (piece.m_pieceClass)
        {
            case PieceClass.Ou:{
                addDestination(new Coordinate(-1, -1), piece, ref destinationList);
                addDestination(new Coordinate(0, -1), piece, ref destinationList);
                addDestination(new Coordinate(1, -1), piece, ref destinationList);
                addDestination(new Coordinate(1, 0), piece, ref destinationList);
                addDestination(new Coordinate(-1, 0), piece, ref destinationList);
                addDestination(new Coordinate(1, 1), piece, ref destinationList);
                addDestination(new Coordinate(0, 1), piece, ref destinationList);
                addDestination(new Coordinate(-1, 1), piece, ref destinationList);
                break;
            }
            case PieceClass.Kin:{
                addDestination(new Coordinate(-1, (piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
                addDestination(new Coordinate(0, (piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
                addDestination(new Coordinate(1, (piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
                addDestination(new Coordinate(1, 0), piece, ref destinationList);
                addDestination(new Coordinate(-1, 0), piece, ref destinationList);
                addDestination(new Coordinate(0, (piece.m_whose == Who.One) ? 1 : -1), piece, ref destinationList);
                break;
            }
            case PieceClass.Gin:{
                if (!piece.m_isPromoted) {
                    addDestination(new Coordinate(-1, (piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
                    addDestination(new Coordinate(0, (piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
                    addDestination(new Coordinate(1, (piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
                    addDestination(new Coordinate(1, 1), piece, ref destinationList);
                    addDestination(new Coordinate(-1, 1), piece, ref destinationList);
                } else {
                    addDestination(new Coordinate(-1, (piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
                    addDestination(new Coordinate(0, (piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
                    addDestination(new Coordinate(1, (piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
                    addDestination(new Coordinate(1, 0), piece, ref destinationList);
                    addDestination(new Coordinate(-1, 0), piece, ref destinationList);
                    addDestination(new Coordinate(0, (piece.m_whose == Who.One) ? 1 : -1), piece, ref destinationList);
                }
                break;
            }
            case PieceClass.Keima:{
                if (!piece.m_isPromoted) {
                    addDestination(new Coordinate(-1, (piece.m_whose == Who.One) ? -2 : 2), piece, ref destinationList);
                    addDestination(new Coordinate(1, (piece.m_whose == Who.One) ? -2 : 2), piece, ref destinationList);
                } else {
                    addDestination(new Coordinate(-1, (piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
                    addDestination(new Coordinate(0,(piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
                    addDestination(new Coordinate(1, (piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
                    addDestination(new Coordinate(1, 0), piece, ref destinationList);
                    addDestination(new Coordinate(-1, 0), piece, ref destinationList);
                    addDestination(new Coordinate(0, (piece.m_whose == Who.One) ? 1 : -1), piece, ref destinationList);
                }
                break;
            }
            case PieceClass.Kyosha:{
                if (!piece.m_isPromoted) {
                    //上
                    for (int i = 1; piece.m_position.y - i >= 0; i++) {
                        if (!addDestination(new Coordinate(0, -i), piece, ref destinationList)) {
                            break;
                        }
                        if (m_pieceArray[piece.m_position.x, piece.m_position.y - i]) {
                            break;
                        }
                    }
                    //下
                    for (int i = 1; piece.m_position.y + i <= 8; i++) {
                        if (!addDestination(new Coordinate(0, i), piece, ref destinationList)) {
                            break;
                        }
                        if (m_pieceArray[piece.m_position.x, piece.m_position.y + i]) {
                            break;
                        }
                    }
                } else {
                    addDestination(new Coordinate(-1, (piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
                    addDestination(new Coordinate(0,(piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
                    addDestination(new Coordinate(1, (piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
                    addDestination(new Coordinate(1, 0), piece, ref destinationList);
                    addDestination(new Coordinate(-1, 0), piece, ref destinationList);
                    addDestination(new Coordinate(0, (piece.m_whose == Who.One) ? 1 : -1), piece, ref destinationList);
                }
                break;
            }
            case PieceClass.Kaku:{
                //左上
                for (int i = 1; (piece.m_position.x - i >= 0) && (piece.m_position.y - i >= 0); i++) {
                    if (!addDestination(new Coordinate(-i, -i), piece, ref destinationList)) {
                        break;
                    }
                    if (m_pieceArray[piece.m_position.x - i, piece.m_position.y - i]) {
                        break;
                    }
                }
                //右上
                for (int i = 1; (piece.m_position.x + i <= 8) && (piece.m_position.y - i >= 0); i++) {
                    if (!addDestination(new Coordinate(i, -i), piece, ref destinationList)) {
                        break;
                    }
                    if (m_pieceArray[piece.m_position.x + i, piece.m_position.y - i]) {
                        break;
                    }
                }
                //左下
                for (int i = 1; (piece.m_position.x - i >= 0) && (piece.m_position.y + i <= 8); i++) {
                    if (!addDestination(new Coordinate(-i, i), piece, ref destinationList)) {
                        break;
                    }
                    if (m_pieceArray[piece.m_position.x - i, piece.m_position.y + i]) {
                        break;
                    }
                }
                //右下
                for (int i = 1; (piece.m_position.x + i <= 8) && (piece.m_position.y + i <= 8); i++) {
                    if (!addDestination(new Coordinate(i, i), piece, ref destinationList)) {
                        break;
                    }
                    if (m_pieceArray[piece.m_position.x + i, piece.m_position.y + i]) {
                        break;
                    }
                }
                if (piece.m_isPromoted) {
                    addDestination(new Coordinate(0, -1), piece, ref destinationList);
                    addDestination(new Coordinate(0, 1), piece, ref destinationList);
                    addDestination(new Coordinate(-1, 0), piece, ref destinationList);
                    addDestination(new Coordinate(1, 0), piece, ref destinationList);
                }
                break;
            }
            case PieceClass.Hisha:{
                //左
                for (int i = 1; piece.m_position.x - i >= 0; i++) {
                    if (!addDestination(new Coordinate(-i, 0), piece, ref destinationList)) {
                        break;
                    }
                    if (m_pieceArray[piece.m_position.x - i, piece.m_position.y]) {
                        break;
                    }
                }
                //右
                for (int i = 1; piece.m_position.x + i <= 8; i++) {
                    if (!addDestination(new Coordinate(i, 0), piece, ref destinationList)) {
                        break;
                    }
                    if (m_pieceArray[piece.m_position.x + i, piece.m_position.y]) {
                        break;
                    }
                }
                //上
                for (int i = 1; piece.m_position.y - i >= 0; i++) {
                    if (!addDestination(new Coordinate(0, -i), piece, ref destinationList)) {
                        break;
                    }
                    if (m_pieceArray[piece.m_position.x, piece.m_position.y - i]) {
                        break;
                    }
                }
                //下
                for (int i = 1; piece.m_position.y + i <= 8; i++) {
                    if (!addDestination(new Coordinate(0, i), piece, ref destinationList)) {
                        break;
                    }
                    if (m_pieceArray[piece.m_position.x, piece.m_position.y + i]) {
                        break;
                    }
                }
                if (piece.m_isPromoted) {
                    addDestination(new Coordinate(-1, -1), piece, ref destinationList);
                    addDestination(new Coordinate(-1, 1), piece, ref destinationList);
                    addDestination(new Coordinate(1, -1), piece, ref destinationList);
                    addDestination(new Coordinate(1, 1), piece, ref destinationList);
                }
                break;
            }
            case PieceClass.Hu:{
                if (!piece.m_isPromoted) {
                    addDestination(new Coordinate(0, (piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
                } else {
                    addDestination(new Coordinate(-1, (piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
                    addDestination(new Coordinate(0, (piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
                    addDestination(new Coordinate(1, (piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
                    addDestination(new Coordinate(1, 0), piece, ref destinationList);
                    addDestination(new Coordinate(-1, 0), piece, ref destinationList);
                    addDestination(new Coordinate(0, (piece.m_whose == Who.One) ? 1 : -1), piece, ref destinationList);
                }
                break;
            }
            default:{
                break;
            }
        }
        return destinationList;
    }

    private bool addDestination(Coordinate moveCoordinate, Piece piece, ref List<Coordinate> destinationList) {
        Coordinate destination = new Coordinate(moveCoordinate.x + piece.m_position.x, moveCoordinate.y + piece.m_position.y);
        //移動先が範囲内かどうか
        if (destination.x < 0 || 8 < destination.x) {
            return false;
        }
        if (destination.y < 0 || 8 < destination.y) {
            return false;
        }
        //移動先に自分のコマがあるか
        if (m_pieceArray[destination.x, destination.y]) {
            if (piece.m_whose == m_pieceArray[destination.x, destination.y].GetComponent<Piece>().m_whose) {
                return false;
            }
        }
        destinationList.Add(destination);
        return true;
    }

    private bool validatePromoiton() {
        if(m_isSelectedPieceButton) {
            return false;
        }
        if(m_selectedPiece.m_whose == m_selectedSquere.m_whose) {
            return false;
        }
        if(m_selectedSquere.m_whose == Who.No) {
            return false;
        }
        if(m_selectedPiece.m_isPromoted) {
            return false;
        }
        if(!m_selectedPiece.m_isAblePromote) {
            return false;
        }
        return true;
    }

    private void onSelectInfo() {
        bool isGameEnd = false;
        if(!m_isSelectedPieceButton) {
            //移動先のコマがあれば取る
            GameObject destinationPiece = m_pieceArray[m_selectedSquere.m_position.x, m_selectedSquere.m_position.y];
            Player turnPlayer = (m_whoseTurn == Who.One ? m_playerOne : m_playerTwo);
            if (destinationPiece) {
                Piece destinationPieceObject = destinationPiece.GetComponent<Piece>();
                Destroy(destinationPiece);
                if (destinationPieceObject.m_pieceClass == PieceClass.Ou) {
                    //王を取った時勝利する
                    turnPlayer.win();
                    isGameEnd = true;
                    Debug.Log("WIN Player " + (destinationPieceObject.m_whose == Who.Two ? "One" : "Two"));
                } else {
                    turnPlayer.pushPiece(destinationPieceObject.m_pieceClass);
                }
            }
            //移動する
            m_pieceArray[m_selectedSquere.m_position.x, m_selectedSquere.m_position.y] = m_pieceArray[m_selectedPiece.m_position.x, m_selectedPiece.m_position.y];
            m_pieceArray[m_selectedPiece.m_position.x, m_selectedPiece.m_position.y] = null;
            m_selectedPiece.move(m_selectedSquere.m_position, m_selectedSquere.transform.position);
            //成る
            if (m_selectedIsPromoted) {
                m_audioManager.playPromote();
                m_selectedPiece.promote();
            }
        } else {
            GameObject[] pieceArray = new GameObject[] {
                m_pieceOu,
                m_pieceKin,
                m_pieceGin,
                m_pieceKeima,
                m_pieceKyosha,
                m_pieceKaku,
                m_pieceHisha,
                m_pieceHu
            };
            m_pieceArray[m_selectedSquere.m_position.x, m_selectedSquere.m_position.y] = Instantiate(pieceArray[(int)m_selectedPieceButtonClass], m_selectedSquere.transform.position, Quaternion.identity);
            m_pieceArray[m_selectedSquere.m_position.x, m_selectedSquere.m_position.y].GetComponent<Piece>().initialize(m_selectedPieceButtonClass, m_whoseTurn, new Coordinate(m_selectedSquere.m_position.x, m_selectedSquere.m_position.y));
            m_pieceArray[m_selectedSquere.m_position.x, m_selectedSquere.m_position.y].tag = ((m_whoseTurn == Who.One) ? "OnesPiece" : "TwosPiece");
        }
        if (!isGameEnd) {
            //ターン移行する
            m_whoseTurn = (m_whoseTurn == Who.One ? Who.Two : Who.One);
            GameObject toActivePlayer = (m_whoseTurn == Who.One ? m_playerOneObject : m_playerTwoObject);
            GameObject toDeactivePlayer = (m_whoseTurn != Who.One ? m_playerOneObject : m_playerTwoObject);
            toActivePlayer.SetActive(true);
            toDeactivePlayer.SetActive(false);
            //選択情報を初期化する
            initSelectedInfomation();
        }
    }
}
