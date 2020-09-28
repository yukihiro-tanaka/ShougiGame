using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PieceUI : MonoBehaviour
{
    private GameManager m_gameManager = default;
    private PieceButton m_pieceButton = default;
    private Text m_pieceCountText = default;
    private int m_pieceCount;
    
    private void Start()
    {
        m_pieceCount = 0;
        m_pieceButton = transform.GetChild(0).gameObject.GetComponent<PieceButton>();
        m_pieceCountText = transform.GetChild(1).gameObject.GetComponent<Text>();
        m_pieceCountText.text = m_pieceCount.ToString();
    }

    public void initilize(GameManager gameManager)
    {
        m_gameManager = gameManager;
    }

    public void pushPiece(int count)
    {
        m_pieceCount += count;
        m_pieceCountText.text = m_pieceCount.ToString();
    }

    public Piece pullPiece()
    {
        return null;
    }
}
