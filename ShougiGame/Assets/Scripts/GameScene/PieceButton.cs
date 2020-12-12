using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PieceButton : MonoBehaviour
{
    [SerializeField] private PieceClass m_pieceClass = default;
    private GameManager m_gameManager = default;

    public void initialize(GameManager objGameManager) {
        m_gameManager = objGameManager.GetComponent<GameManager>();
    }

    public void onClick() {
        m_gameManager.onSelectPieceButton(m_pieceClass);
    }
}
