using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Piece : MonoBehaviour
{
    public PieceClass m_pieceClass { get; private set; }
    public Who m_whose { get; private set; }
    public Coordinate m_position { get; private set; }
    public bool m_isPromoted { get; private set; }
    public bool m_isAblePromote { get; private set; }
    private GameObject m_aura = default;
    private Vector3 m_targetTransformPosition;
    Quaternion m_targetTransformRotation;
    private PieceAnimetor m_pieceAnimator;

    private void Start() {
        m_pieceAnimator = transform.GetChild(0).gameObject.GetComponent<PieceAnimetor>();
    }

    private void Update() {
        if (m_targetTransformRotation != transform.localRotation) {
            transform.localRotation = Quaternion.RotateTowards(transform.localRotation, m_targetTransformRotation, 50.0f * Time.deltaTime);
            return;
        }
        if (m_targetTransformPosition != transform.localPosition) {
            m_pieceAnimator.setIsWalking(true);
            transform.localPosition = Vector3.MoveTowards(transform.localPosition, m_targetTransformPosition,  0.1f * Time.deltaTime);
        } else {
            m_pieceAnimator.setIsWalking(false);
            m_targetTransformRotation = Quaternion.Euler(0, (m_whose == Who.One) ? 0.0f : 180.0f, 0);
        }
    }

    // Awakeで初期化すること
    public void initialize(PieceClass pieceClass, Who whose, Coordinate position, GameObject objGameBoard)
    {
        m_pieceClass = pieceClass;
        m_whose = whose;
        m_isPromoted = false;
        m_position = position;
        m_isAblePromote = (!(pieceClass == PieceClass.Ou || pieceClass == PieceClass.Kin) ? true : false);
        //子オブジェクトにあるオーラを取得する
        if (m_isAblePromote) {
            m_aura = transform.Find("Eff_Aura_6").gameObject;
        }
        transform.parent = objGameBoard.transform;
        //向きを変更する
        transform.Rotate(new Vector3(0, objGameBoard.transform.rotation.y, 0));
        if (m_whose == Who.Two) {
            transform.Rotate(new Vector3(0, 180, 0));
        }
        m_targetTransformPosition = transform.localPosition;
        m_targetTransformRotation = transform.localRotation;
    }

    public void promote()
    {
        if (m_isAblePromote) {
            m_isPromoted = true;
            m_aura.SetActive(true);
        }
    }

    public void move(Coordinate position, Vector3 targetTransformPosition)
    {
        m_position = position;
        m_targetTransformPosition = targetTransformPosition;
        float diffX = transform.localPosition.x - targetTransformPosition.x;
        float diffZ = transform.localPosition.z - targetTransformPosition.z;
        float rotation;
        if (diffZ == 0) {
            rotation = ((diffX < 0) ? 90.0f : -90.0f);
        } else {
            rotation = Mathf.Atan(diffX / diffZ) * Mathf.Rad2Deg + ((m_whose == Who.One) ? 0.0f : 180.0f);
        }
        m_targetTransformRotation = Quaternion.Euler(0, rotation, 0);
    }
}
