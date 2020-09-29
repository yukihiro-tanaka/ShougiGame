using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    [SerializeField] private Who m_who;
    private PlayerCanvas m_playerCanvas = default;
    private Dictionary<PieceClass, int> m_pieceDictionary = new Dictionary<PieceClass, int>();

    private void Awake()
    {
        m_pieceDictionary[PieceClass.Kin] = 0;
        m_pieceDictionary[PieceClass.Gin] = 0;
        m_pieceDictionary[PieceClass.Keima] = 0;
        m_pieceDictionary[PieceClass.Kyosha] = 0;
        m_pieceDictionary[PieceClass.Kaku] = 0;
        m_pieceDictionary[PieceClass.Hisha] = 0;
        m_pieceDictionary[PieceClass.Hu] = 0;
    }

    private void Start()
    {
        m_playerCanvas = transform.Find("Canvas").gameObject.GetComponent<PlayerCanvas>();
    }

    public bool pushPiece(PieceClass pieceClass)
    {
        if (!m_pieceDictionary.ContainsKey(pieceClass)) {
           return false;
       }
        m_pieceDictionary[pieceClass] = m_pieceDictionary[pieceClass] + 1;
        m_playerCanvas.showCount(pieceClass, m_pieceDictionary[pieceClass]);
        return true;
    }

    public bool pullPiece(PieceClass pieceClass)
    {
       if (!m_pieceDictionary.ContainsKey(pieceClass)) {
           return false;
       }
       if (m_pieceDictionary[pieceClass] <= 0) {
           return false;
       }
       m_pieceDictionary[pieceClass] = m_pieceDictionary[pieceClass] - 1;
       m_playerCanvas.showCount(pieceClass, m_pieceDictionary[pieceClass]);
       return true;
    }
}
