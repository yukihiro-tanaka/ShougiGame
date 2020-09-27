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
    private Animator m_pieceAnimator;


    private void Start() {
        m_pieceAnimator = GetComponent<Animator>();
    }
    private void Update() {
        if (transform.position == m_targetTransformPosition) {
            m_pieceAnimator.SetBool("isWalking", false);
        } else {
            transform.position = Vector3.MoveTowards(transform.position, m_targetTransformPosition, 2 * Time.deltaTime);
            m_pieceAnimator.SetBool("isWalking", true);
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
    }


    private void OnChangedIsPromoted()
    {
        Debug.Log( "log" );
    }
}
