using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;

public class Player
{
    public Dictionary<PieceClass, ReactiveProperty<int>> m_pieceDictionary = new Dictionary<PieceClass, ReactiveProperty<int>>();

    public Player()
    {
        m_pieceDictionary.Add(PieceClass.Kin, new ReactiveProperty<int>());
        m_pieceDictionary.Add(PieceClass.Gin, new ReactiveProperty<int>());
        m_pieceDictionary.Add(PieceClass.Keima, new ReactiveProperty<int>());
        m_pieceDictionary.Add(PieceClass.Kyosha, new ReactiveProperty<int>());
        m_pieceDictionary.Add(PieceClass.Kaku, new ReactiveProperty<int>());
        m_pieceDictionary.Add(PieceClass.Hisha, new ReactiveProperty<int>());
        m_pieceDictionary.Add(PieceClass.Hu, new ReactiveProperty<int>());
    }

    public bool hasPiece(PieceClass pieceClass)
    {
        if (!m_pieceDictionary.ContainsKey(pieceClass)) {
           return false;
        }
        return m_pieceDictionary[pieceClass].Value != 0;
    }

    public bool pushPiece(PieceClass pieceClass)
    {
        if (!m_pieceDictionary.ContainsKey(pieceClass)) {
           return false;
        }
        m_pieceDictionary[pieceClass].Value += 1;
        return true;
    }

    public bool pullPiece(PieceClass pieceClass)
    {
       if (!m_pieceDictionary.ContainsKey(pieceClass)) {
           return false;
       }
       if (m_pieceDictionary[pieceClass].Value <= 0) {
           return false;
       }
       m_pieceDictionary[pieceClass].Value -= 1;
       return true;
    }
}
