using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerCanvas : MonoBehaviour
{
    private Dictionary<PieceClass, Text> m_pieceCountTextDictionary = new Dictionary<PieceClass, Text>();

    private void Start()
    {
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
