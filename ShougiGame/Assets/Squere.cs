using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Squere : MonoBehaviour
{
    public Who m_whose { get; private set; }
    public Coordinate m_position { get; private set; }
    public void initialize(Who whose, Coordinate position)
    {
        m_whose = whose;
        m_position = position;
    }
}
