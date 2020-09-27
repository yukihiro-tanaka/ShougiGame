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
    private Animator m_pieceAnimator;


    private void Start() {
        m_pieceAnimator = GetComponent<Animator>();
    }

    private void Update() {
        if (!isReachTargetTransformRotation()) {
            transform.rotation = Quaternion.Slerp(transform.rotation, m_targetTransformRotation, Time.deltaTime);
            return;
        }
        if (!isReachTargetTransformPosition()) {
            m_pieceAnimator.SetBool("isWalking", true);
            transform.position = Vector3.MoveTowards(transform.position, m_targetTransformPosition, 2 * Time.deltaTime);
        } else {
            m_pieceAnimator.SetBool("isWalking", false);
            m_targetTransformRotation.y = ((m_whose == Who.One) ? 0.0f : 180.0f);
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
        m_targetTransformRotation = Quaternion.Euler(0, rotation, 0);
    }

    private bool isReachTargetTransformRotation()
    {
        float animetionRangeY = 2.0f;
        if (Mathf.Abs(Mathf.DeltaAngle(m_targetTransformRotation.eulerAngles.y, transform.rotation.eulerAngles.y)) > animetionRangeY) {
            return false;
        }
        return true;
    }
    private bool isReachTargetTransformPosition()
    {
        float animetionRangeX = 0.05f;
        float animetionRangeZ = 0.05f;
        if (Mathf.Abs(m_targetTransformPosition.x - transform.position.x) > animetionRangeX) {
            return false;
        }
        if (Mathf.Abs(m_targetTransformPosition.z - transform.position.z) > animetionRangeZ) {
            return false;
        }
        return true;
    }
}
