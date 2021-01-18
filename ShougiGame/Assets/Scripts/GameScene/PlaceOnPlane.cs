using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.UI;

[RequireComponent(typeof(ARRaycastManager))]
public class PlaceOnPlane : MonoBehaviour
{
    private GameObject m_objGameBoard = default;
    private GameManager m_gameManager = default;
    private Who m_whose;
    private ARRaycastManager raycastManager;
    private static List<ARRaycastHit> hits = new List<ARRaycastHit>();
    private GameObject m_objCamera = default;
    private Camera m_camera = default;
    private int m_beforeTouchCount = 0;

    public Text debug1;

    public void initialize(GameManager gameManager, bool isMaster)
    {
        m_objGameBoard = GameObject.Find("GameBoard");
        m_gameManager = gameManager;
        m_whose = isMaster ? Who.One : Who.Two;
        raycastManager = GetComponent<ARRaycastManager>();
        m_objCamera = transform.Find("AR Camera").gameObject;
        m_camera = transform.Find("AR Camera").GetComponent<Camera>();
    }

    void Update()
    {
        if (Input.touchCount > 0 && m_beforeTouchCount == 0)
        {
            onTouch();
        }
        m_beforeTouchCount = Input.touchCount;
    }

    private void onTouch()
    {
        GameObject clickedObject = null;
        switch ( m_gameManager.m_selectMode )
        {
            case GameManager.SelectMode.ModePiece:
            {
                if (clickedObject = getTouchObject(m_whose == Who.One ? "OnesPiece" : "TwosPiece")) {
                    m_gameManager.onSelectPiece(clickedObject);
                } else {
                    moveGameBoard();
                }
                break;
            }
            case GameManager.SelectMode.ModeSquere:
            {
                if (clickedObject = getTouchObject("Squere")) {
                    m_gameManager.onSelectSquere(clickedObject);
                } else {
                    moveGameBoard();
                }
                break;
            }
            default:
            {
                break;
            }
        }
    }

    private GameObject getTouchObject(string tag)
    {
        GameObject clickedObject = null;
        Ray ray = m_camera.ScreenPointToRay(Input.GetTouch(0).position);
        foreach (RaycastHit hit in Physics.RaycastAll(ray)) {
            if (hit.collider.gameObject.tag == tag) {
                clickedObject = hit.collider.gameObject;
                break;
            }
        }
        return clickedObject;
    }

    private void moveGameBoard()
    {
        Vector2 touchPosition = Input.GetTouch(0).position;
        if (raycastManager.Raycast(touchPosition, hits, TrackableType.Planes))
        {
            // Raycastの衝突情報は距離によってソートされるため、0番目が最も近い場所でヒットした情報となります
            var hitPose = hits[0].pose;
            m_objGameBoard.transform.position = hitPose.position;
            m_objGameBoard.transform.rotation = Quaternion.Euler(0, m_objCamera.transform.localEulerAngles.y, 0);
            if (m_whose == Who.Two) {
                m_objGameBoard.transform.Rotate(new Vector3(0, 180, 0));
            }
        }
    }
}