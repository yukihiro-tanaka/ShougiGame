public enum Who : int
{
    No = -1,
    One,
    Two
}

public enum PieceClass : int
{
    No = -1,
    Ou,
    Kin,
    Gin,
    Keima,
    Kyosha,
    Kaku,
    Hisha,
    Hu
}

public class Coordinate
{
    public int x; //左→右
    public int y; //上→下
    public Coordinate(int x, int y)
    {
        this.x = x;
        this.y = y;
    }
}
