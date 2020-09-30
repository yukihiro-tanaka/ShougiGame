using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class YesButton : MonoBehaviour
{
    [SerializeField] private GameManager m_gameManager = default;
    private GameManager m_gameManagerObject = default;

    void Start() {
        m_gameManagerObject = m_gameManager.GetComponent<GameManager>();
    }

    public void OnClick()
    {
        Debug.Log("Click");
        m_gameManagerObject.onClickYesButton();
    }
}
