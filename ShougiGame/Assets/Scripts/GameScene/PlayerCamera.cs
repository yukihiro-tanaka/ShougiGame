using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerCamera : MonoBehaviour
{
    //選択情報を渡すゲームマネージャー
    private GameManager m_gameManager = default;
    //カメラ情報
    private Camera m_camera = default;
    //プレイヤー
    [SerializeField] private Who m_whose = default;

    public void initialize(GameManager gameManager, bool isMaster)
    {
        m_camera = this.GetComponent<Camera>();
        m_gameManager = gameManager;
        m_whose = isMaster ? Who.One : Who.Two;
        if (!isMaster) {
            transform.position = new Vector3(0, 19, 7);
            transform.rotation = Quaternion.Euler(110, 0, 180);
        }
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
        switch ( m_gameManager.m_selectMode )
        {
            case GameManager.SelectMode.ModePiece:
            {
                if (clickedObject = getClickedObject(m_whose == Who.One ? "OnesPiece" : "TwosPiece")) {
                    m_gameManager.onSelectPiece(clickedObject);
                }
                break;
            }
            case GameManager.SelectMode.ModeSquere:
            {
                if (clickedObject = getClickedObject("Squere")) {
                    m_gameManager.onSelectSquere(clickedObject);
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
        m_gameManager.initSelectedInfomation();
    }

    private GameObject getClickedObject(string tag)
    {
        GameObject clickedObject = null;
        Ray ray = m_camera.ScreenPointToRay(Input.mousePosition);
        foreach (RaycastHit hit in Physics.RaycastAll(ray)) {
            if (hit.collider.gameObject.tag == tag) {
                clickedObject = hit.collider.gameObject;
                break;
            }
        }
        return clickedObject;
    }
}
