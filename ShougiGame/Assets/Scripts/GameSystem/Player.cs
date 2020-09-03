﻿using System.Collections.Generic;

public class Player
{
    public Who m_who { get; private set; }
    public List<PieceClass> m_pieceList { get; private set; }

    public Player(Who who)
    {
        m_who = who;
        m_pieceList = new List<PieceClass>();
    }
}
