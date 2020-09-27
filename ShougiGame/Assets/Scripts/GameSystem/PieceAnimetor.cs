using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PieceAnimetor : MonoBehaviour
{
    private Animator m_pieceAnimator;
    private void Start()
    {
        m_pieceAnimator = GetComponent<Animator>();
    }

    public void setIsWalking(bool isWalking) 
    {
        m_pieceAnimator.SetBool("isWalking", isWalking);
    }
}
