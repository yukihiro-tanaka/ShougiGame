using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerCanvas : MonoBehaviour
{
    private Dictionary<PieceClass, Text> m_pieceCountTextDictionary = new Dictionary<PieceClass, Text>();

    private void Start()
    {
        m_pieceCountTextDictionary[PieceClass.Kin] = transform.Find("KinUI/KinCountText").GetComponent<Text>();
        m_pieceCountTextDictionary[PieceClass.Gin] = transform.Find("GinUI/GinCountText").GetComponent<Text>();
        m_pieceCountTextDictionary[PieceClass.Keima] = transform.Find("KeimaUI/KeimaCountText").GetComponent<Text>();
        m_pieceCountTextDictionary[PieceClass.Kyosha] = transform.Find("KyoshaUI/KyoshaCountText").GetComponent<Text>();
        m_pieceCountTextDictionary[PieceClass.Kaku] = transform.Find("KakuUI/KakuCountText").GetComponent<Text>();
        m_pieceCountTextDictionary[PieceClass.Hisha] = transform.Find("HishaUI/HishaCountText").GetComponent<Text>();
        m_pieceCountTextDictionary[PieceClass.Hu] = transform.Find("HuUI/HuCountText").GetComponent<Text>();
    }

    public bool showCount(PieceClass pieceClass, int count) {
        if (!m_pieceCountTextDictionary.ContainsKey(pieceClass)) {
           return false;
       }
       m_pieceCountTextDictionary[pieceClass].text = count.ToString();
       return true;
    }
 }
