using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public enum SelectMode
    {
        ModePeice,
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
    [SerializeField] private GameObject m_pieceKyosya = default;
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

    //ターン情報
    private Who m_whoseTurn = Who.One;

    //プレイヤーカメラ情報
    [SerializeField] private GameObject m_playerOneCamara = default;
    [SerializeField] private GameObject m_playerTowCamara = default;

    //プレイヤー情報
    private Player m_playerOne;
    private Player m_playerTwo;

    void Awake()
    {
        //オブジェクト生成、初期化
        placeSqueres();
        placePieces();
        initSelectedInfomation();
        m_playerOne = new Player(Who.One);
        m_playerTwo = new Player(Who.Two);
    }

    public void onSelectPiece(GameObject selectedPiece) {
        m_selectMode = SelectMode.ModeSquere;
        m_selectedPiece = selectedPiece.GetComponent<Piece>();
        //移動先のマスを選択できるようにする
        List<Coordinate> destinationList = createDestinationList(m_selectedPiece);
        foreach (Coordinate destination in destinationList)
        {
            m_squereArray[destination.x, destination.y].GetComponent<MeshCollider>().enabled = true;
        }
    }

    public void onSelectSquere(GameObject selectedSquere) {
        m_selectedSquere = selectedSquere.GetComponent<Squere>();
        if (m_selectedPiece.m_whose != m_selectedSquere.m_whose && m_selectedSquere.m_whose != Who.No && !m_selectedPiece.m_isPromoted && m_selectedPiece.m_isAblePromote) {
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
        m_selectMode = SelectMode.ModePeice;
        m_selectedPiece = null;
        m_selectedSquere = null;
        m_selectedIsPromoted = false;
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

    private void placeSqueres()
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

    private void placePieces()
    {
        PeiceClass[,] pieceClassArray = new PeiceClass[,] {
            { PeiceClass.Kyosya, PeiceClass.Keima, PeiceClass.Gin, PeiceClass.Kin, PeiceClass.Ou, PeiceClass.Kin, PeiceClass.Gin, PeiceClass.Keima, PeiceClass.Kyosya },
            { PeiceClass.No, PeiceClass.Hisha, PeiceClass.No, PeiceClass.No, PeiceClass.No, PeiceClass.No, PeiceClass.No, PeiceClass.Kaku, PeiceClass.No },
            { PeiceClass.Hu, PeiceClass.Hu, PeiceClass.Hu, PeiceClass.Hu, PeiceClass.Hu, PeiceClass.Hu, PeiceClass.Hu, PeiceClass.Hu, PeiceClass.Hu },
            { PeiceClass.No, PeiceClass.No, PeiceClass.No, PeiceClass.No, PeiceClass.No, PeiceClass.No, PeiceClass.No, PeiceClass.No, PeiceClass.No },
            { PeiceClass.No, PeiceClass.No, PeiceClass.No, PeiceClass.No, PeiceClass.No, PeiceClass.No, PeiceClass.No, PeiceClass.No, PeiceClass.No },
            { PeiceClass.No, PeiceClass.No, PeiceClass.No, PeiceClass.No, PeiceClass.No, PeiceClass.No, PeiceClass.No, PeiceClass.No, PeiceClass.No },
            { PeiceClass.Hu, PeiceClass.Hu, PeiceClass.Hu, PeiceClass.Hu, PeiceClass.Hu, PeiceClass.Hu, PeiceClass.Hu, PeiceClass.Hu, PeiceClass.Hu },
            { PeiceClass.No, PeiceClass.Kaku, PeiceClass.No, PeiceClass.No, PeiceClass.No, PeiceClass.No, PeiceClass.No, PeiceClass.Hisha, PeiceClass.No },
            { PeiceClass.Kyosya, PeiceClass.Keima, PeiceClass.Gin, PeiceClass.Kin, PeiceClass.Ou, PeiceClass.Kin, PeiceClass.Gin, PeiceClass.Keima, PeiceClass.Kyosya }
        };
        GameObject[] m_pieceList = new GameObject[] {
            m_pieceOu,
            m_pieceKin,
            m_pieceGin,
            m_pieceKeima,
            m_pieceKyosya,
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
                if (pieceClassArray[i, j] != PeiceClass.No) {
                    m_pieceArray[j, i] = Instantiate(m_pieceList[(int)pieceClassArray[i, j]], leftUpPosition + diffPosition, Quaternion.identity);
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
            case PeiceClass.Ou:{
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
            case PeiceClass.Kin:{
                addDestination(new Coordinate(-1, (piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
                addDestination(new Coordinate(0, (piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
                addDestination(new Coordinate(1, (piece.m_whose == Who.One) ? -1 : 1), piece, ref destinationList);
                addDestination(new Coordinate(1, 0), piece, ref destinationList);
                addDestination(new Coordinate(-1, 0), piece, ref destinationList);
                addDestination(new Coordinate(0, (piece.m_whose == Who.One) ? 1 : -1), piece, ref destinationList);
                break;
            }
            case PeiceClass.Gin:{
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
            case PeiceClass.Keima:{
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
            case PeiceClass.Kyosya:{
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
            case PeiceClass.Kaku:{
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
            case PeiceClass.Hisha:{
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
            case PeiceClass.Hu:{
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

    private void onSelectInfo() {
        //移動先のコマがあれば取る
        GameObject destinationPiece = m_pieceArray[m_selectedSquere.m_position.x, m_selectedSquere.m_position.y];
        Piece destinationPieceObject;
        Player turnPlayer = (m_whoseTurn == Who.One ? m_playerOne : m_playerTwo);
        if (destinationPiece) {
            destinationPieceObject = destinationPiece.GetComponent<Piece>();
            if (destinationPieceObject.m_pieceClass == PeiceClass.Ou) {
                //王を取った時勝利する
                Debug.Log("WIN Player " + (destinationPieceObject.m_whose == Who.Two ? "One" : "Two"));
            } else {
                turnPlayer.m_pieceList.Add(destinationPieceObject.m_pieceClass);
            }
            Destroy(destinationPiece);
        }
        //移動する
        m_pieceArray[m_selectedSquere.m_position.x, m_selectedSquere.m_position.y] = m_pieceArray[m_selectedPiece.m_position.x, m_selectedPiece.m_position.y];
        m_pieceArray[m_selectedPiece.m_position.x, m_selectedPiece.m_position.y] = null;
        m_selectedPiece.move(m_selectedSquere.m_position, m_selectedSquere.transform.position);
        //成る
        if (m_selectedIsPromoted) {
            m_selectedPiece.promote();
        }
        //ターン移行する
        m_whoseTurn = (m_whoseTurn == Who.One ? Who.Two : Who.One);
        GameObject toActiveCamera = (m_whoseTurn == Who.One ? m_playerOneCamara : m_playerTowCamara);
        GameObject toDeactiveCamera = (m_whoseTurn != Who.One ? m_playerOneCamara : m_playerTowCamara);
        toActiveCamera.SetActive(true);
        toDeactiveCamera.SetActive(false);
        //選択情報を初期化する
        initSelectedInfomation();
    }
}
