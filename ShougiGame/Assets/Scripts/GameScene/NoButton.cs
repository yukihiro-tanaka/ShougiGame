﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NoButton : MonoBehaviour
{
    private GameManager m_gameManager = default;

    public void initialize(GameManager gameManager) {
        m_gameManager = gameManager;
    }

    public void OnClick()
    {
        m_gameManager.onClickNoButton();
    }
}
