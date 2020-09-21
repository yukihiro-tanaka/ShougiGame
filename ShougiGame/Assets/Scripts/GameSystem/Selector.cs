using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Selector : MonoBehaviour
{
    //選択情報を渡すゲームマネージャー
    [SerializeField] private GameObject m_gameManager = default;
    private GameManager m_gameManagerObject;
    //カメラ情報
    [SerializeField] private GameObject m_mainCamera = default;
    private Camera m_cameraObject = default;

    void Start()
    {
        m_gameManagerObject = m_gameManager.GetComponent<GameManager>();
        m_cameraObject = m_mainCamera.GetComponent<Camera>();
    }

    void Update()
    {
        if (Input.GetMouseButtonDown(0)) {
            onLeftClick();
        }
        if (Input.GetMouseButtonDown(1)) {
            onRightClick();
        }
    }

    private void onLeftClick()
    {
        GameObject clickedObject = null;
        switch ( m_gameManagerObject.m_selectMode )
        {
            case GameManager.SelectMode.ModePiece:
            {
                if (clickedObject = getClickedObject("OnesPiece")) {
                    m_gameManagerObject.onSelectPiece(clickedObject);
                } else if (clickedObject = getClickedObject("TwosPiece")) {
                    m_gameManagerObject.onSelectPiece(clickedObject);
                }
                break;
            }
            case GameManager.SelectMode.ModeSquere:
            {
                if (clickedObject = getClickedObject("Squere")) {
                    m_gameManagerObject.onSelectSquere(clickedObject);
                }
                break;
            }
            default:
            {
                break;
            }
        }
    }

    private void onRightClick()
    {
        m_gameManagerObject.initSelectedInfomation();
    }

    private GameObject getClickedObject(string tag)
    {
        GameObject clickedObject = null;
        Ray ray = m_cameraObject.ScreenPointToRay(Input.mousePosition);
        foreach (RaycastHit hit in Physics.RaycastAll(ray)) {
            if (hit.collider.gameObject.tag == tag) {
                clickedObject = hit.collider.gameObject;
                break;
            }
        }
        return clickedObject;
    }
}
