using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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
        if (m_targetTransformRotation != transform.rotation) {
            transform.rotation = Quaternion.Slerp(transform.rotation, m_targetTransformRotation, 4 * Time.deltaTime);
            return;
        }
        if (m_targetTransformPosition != transform.position) {
            m_pieceAnimator.setIsWalking(true);
            transform.position = Vector3.MoveTowards(transform.position, m_targetTransformPosition, 2 * Time.deltaTime);
        } else {
            m_pieceAnimator.setIsWalking(false);
            m_targetTransformRotation = Quaternion.Euler(0, (m_whose == Who.One) ? 0.0f : 180.0f, 0);
        }
    }

    // Awakeで初期化すること
    public void initialize(PieceClass pieceClass, Who whose, Coordinate position)
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
        //プレイヤーごとに向きを変更する
        if (m_whose == Who.Two) {
            transform.Rotate(new Vector3(0, 180, 0));
        }
        m_targetTransformPosition = transform.position;
        m_targetTransformRotation = transform.rotation;
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
        float diffX = transform.position.x - targetTransformPosition.x;
        float diffZ = transform.position.z - targetTransformPosition.z;
        float rotation = Mathf.Atan(diffX / diffZ) * Mathf.Rad2Deg + ((m_whose == Who.One) ? 0.0f : 180.0f);
        Debug.Log(rotation);
        m_targetTransformRotation = Quaternion.Euler(0, rotation, 0);
    }
}
