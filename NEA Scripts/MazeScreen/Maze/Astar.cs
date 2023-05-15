using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Astar : MonoBehaviour
{
    private int startx, starty, endx, endy;
    private List<String> wall;
    private Mazecell[,] cell;
    public Astar(int _endx, int _endy, int _startx, int _starty, Mazecell[,] cells, List<String> walls)
    {
        endx = _endx; endy = _endy;
        startx = _startx; starty = _starty;
        wall = walls; cell = cells;
    }

    void setup()
    {
        
        //gcost, hcost, fcost, mincost, prev
    }
}
