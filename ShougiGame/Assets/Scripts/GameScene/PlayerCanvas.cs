using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UniRx;

public class PlayerCanvas : MonoBehaviour
{
    private Dictionary<PieceClass, Text> m_pieceCountTextDictionary = new Dictionary<PieceClass, Text>();

    public void initialize(GameManager gameManager, Player player)
    {
        // 子オプジェクトのボタンを初期化する
        PieceButton kinButton = transform.Find("ButtonGroup/KinButton").GetComponent<PieceButton>();
        PieceButton ginButton = transform.Find("ButtonGroup/GinButton").GetComponent<PieceButton>();
        PieceButton keimaButton = transform.Find("ButtonGroup/KeimaButton").GetComponent<PieceButton>();
        PieceButton kyoshaButton = transform.Find("ButtonGroup/KyoshaButton").GetComponent<PieceButton>();
        PieceButton kakuButton = transform.Find("ButtonGroup/KakuButton").GetComponent<PieceButton>();
        PieceButton hishaButton = transform.Find("ButtonGroup/HishaButton").GetComponent<PieceButton>();
        PieceButton huButton = transform.Find("ButtonGroup/HuButton").GetComponent<PieceButton>();
        kinButton.initialize(gameManager);
        ginButton.initialize(gameManager);
        keimaButton.initialize(gameManager);
        kyoshaButton.initialize(gameManager);
        kakuButton.initialize(gameManager);
        hishaButton.initialize(gameManager);
        huButton.initialize(gameManager);
        // 子オブジェクトのテキストを取得する
        Text kinCountText = transform.Find("ButtonGroup/KinButton/KinCountText").GetComponent<Text>();
        Text ginCountText = transform.Find("ButtonGroup/GinButton/GinCountText").GetComponent<Text>();
        Text keimaCountText = transform.Find("ButtonGroup/KeimaButton/KeimaCountText").GetComponent<Text>();
        Text kyoshaCountText = transform.Find("ButtonGroup/KyoshaButton/KyoshaCountText").GetComponent<Text>();
        Text kakuCountText = transform.Find("ButtonGroup/KakuButton/KakuCountText").GetComponent<Text>();
        Text hishaCountText = transform.Find("ButtonGroup/HishaButton/HishaCountText").GetComponent<Text>();
        Text huCountText = transform.Find("ButtonGroup/HuButton/HuCountText").GetComponent<Text>();
        m_pieceCountTextDictionary[PieceClass.Kin] = kinCountText;
        m_pieceCountTextDictionary[PieceClass.Gin] = ginCountText;
        m_pieceCountTextDictionary[PieceClass.Keima] = keimaCountText;
        m_pieceCountTextDictionary[PieceClass.Kyosha] = kyoshaCountText;
        m_pieceCountTextDictionary[PieceClass.Kaku] = kakuCountText;
        m_pieceCountTextDictionary[PieceClass.Hisha] = hishaCountText;
        m_pieceCountTextDictionary[PieceClass.Hu] = huCountText;
        // プレイヤーの持ち駒数をサブスクライブする
        player.m_pieceDictionary[PieceClass.Kin].Subscribe(x => showCount(PieceClass.Kin, x));
        player.m_pieceDictionary[PieceClass.Gin].Subscribe(x => showCount(PieceClass.Gin, x));
        player.m_pieceDictionary[PieceClass.Keima].Subscribe(x => showCount(PieceClass.Keima, x));
        player.m_pieceDictionary[PieceClass.Kyosha].Subscribe(x => showCount(PieceClass.Kyosha, x));
        player.m_pieceDictionary[PieceClass.Kaku].Subscribe(x => showCount(PieceClass.Kaku, x));
        player.m_pieceDictionary[PieceClass.Hisha].Subscribe(x => showCount(PieceClass.Hisha, x));
        player.m_pieceDictionary[PieceClass.Hu].Subscribe(x => showCount(PieceClass.Hu, x));
    }

    public bool showCount(PieceClass pieceClass, int count) {
        if (!m_pieceCountTextDictionary.ContainsKey(pieceClass)) {
           return false;
       }
       m_pieceCountTextDictionary[pieceClass].text = count.ToString();
       return true;
    }

    public void showWinUI() {
        transform.Find("WinText").gameObject.SetActive(true);
    }
 }
