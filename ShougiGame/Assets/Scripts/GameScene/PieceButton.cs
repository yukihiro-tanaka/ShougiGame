using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PieceButton : MonoBehaviour
{
    [SerializeField] private GameManager m_gameManager = default;
    private GameManager m_gameManagerObject = default;
    [SerializeField] private PieceClass m_pieceClass = default;

    void Start() {
        m_gameManagerObject = m_gameManager.GetComponent<GameManager>();
    }
    public void onClick() {
        m_gameManagerObject.onSelectPieceButton(m_pieceClass);
    }
}
