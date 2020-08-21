using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Piece : MonoBehaviour
{
    public PeiceClass m_pieceClass { get; private set; }
    public Who m_whose { get; private set; }
    public Coordinate m_position { get; private set; }
    public bool m_isPromoted { get; private set; }
    public bool m_isAblePromote { get; private set; }
    [SerializeField] private GameObject m_aura = default;

    public void initialize(PeiceClass pieceClass, Who whose, Coordinate position)
    {
        m_pieceClass = pieceClass;
        m_whose = whose;
        m_isPromoted = false;
        m_position = position;
        m_isAblePromote = (!(pieceClass == PeiceClass.Ou || pieceClass == PeiceClass.Kin) ? true : false);
        //子オブジェクトにあるオーラを取得する
        if (m_isAblePromote) {
            m_aura = transform.Find("Eff_Aura_6").gameObject;
        }
        //プレイヤーごとに向きを変更する
        if (m_whose == Who.Two) {
            transform.Rotate(new Vector3(0, 180, 0));
        }
    }

    public void promote()
    {
        if (m_isAblePromote) {
            m_isPromoted = true;
            m_aura.SetActive(true);
        }
    }

    public void move(Coordinate position, Vector3 trasformPosition)
    {
        m_position = position;
        transform.position = trasformPosition;
    }


    private void OnChangedIsPromoted()
    {
        Debug.Log( "log" );
    }
}
