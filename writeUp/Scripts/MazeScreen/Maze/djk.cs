using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class djk : MonoBehaviour
{
    public List<String> wall;
    private Mazecell[,] cell;
    public List<Mazecell> unvisitedcell;

    //nodex y visited cost previous
    public void djkinit(int startx, int starty, int endx, int endy, List<String> wall,Mazecell[,] cell)
    {
        this.cell = cell;
        this.wall = wall;
        // unvisitedcell = new List<Mazecell>();
        for (int x = 0; x < cell.GetLength(0); x++)
        {
            for (int y = 0; y < cell.GetLength(1); y++)
            {
                bool xWall = false, yWall = false;
                if (wall.Contains($"Wall {x}-{y}-V"))
                    AvaliableCell(x, y, true);
                if (wall.Contains($"Wall {x}-{y}-H"))
                    AvaliableCell(x, y, false);
                if (x == 0) Sidebar(true, true,x,y);
                if(y==0) Sidebar(false,false,x,y);
                if(x==cell.GetLength(0)-1) Sidebar(true, false,x,y);
                if(y==cell.GetLength(1)-1) Sidebar(false, true,x,y);
            }
        }
        foreach (var IndividualCell in cell)
        {
            List<int> djkdirXList = new List<int>(), djkdirYList = new List<int>();
            foreach (var VARIABLE in IndividualCell.djkdirX)
            {
                if (VARIABLE != 5)
                    djkdirXList.Add(VARIABLE);
            }
            foreach (var VARIABLE in IndividualCell.djkdirY)
            {
                if (VARIABLE != 5)
                    djkdirYList.Add(VARIABLE);
            }

            IndividualCell.djkdirX = djkdirXList.ToArray();
            IndividualCell.djkdirY = djkdirYList.ToArray();
        }

        unvisitedcell = new List<Mazecell>();
        this.cell[startx, starty].djkmincost = 0;
        Search(startx, starty,endx, endy);
    }

    void Search(int currX, int currY, int endX, int endY)
    {
        Mazecell current = cell[currX, currY];
        Stack unvisited = new Stack(100),unvistedLoop = new Stack(1000);
        if (currX == endX && currY == endY)return;

        if (current.djkvisited) return;
        current.djkvisited = true;
        if (current.djkdirX.Any()) {
            Vector2 temp;
            for (int i = 0; i < current.djkdirX.Length; i++)
            {
                temp = new Vector2(currX + current.djkdirX[i],
                    currY + current.djkdirY[i]);
                try{if (!unvisited.Contains(temp) && cell[(int)temp.x,(int)temp.y].djkvisited == false)
                    unvisited.Push(temp);}catch{}
            }
            unvistedLoop = unvisited;
        }
        if (unvisited.Peek() != null)
        {
            calcost(currX,currY, (Vector2)unvisited.Pop());//maybe underflow
        }

        Vector2 next;
        if(unvisited.Peek() != null){next = (Vector2)unvistedLoop.Pop();
        Search((int)next.x,(int)next.y,endX, endY);}
    }
    
   

    void calcost(int currentx, int currenty,Vector2 cellPosition)
    {
        Debug.Log(currentx +""+ currenty +""+cellPosition);
        try
        {
            Mazecell neighbour = cell[currentx + (int)cellPosition.x, currenty + (int)cellPosition.y],
                current = cell[currentx, currentx];
            float cost = current.djkmincost + obcheck((int)cellPosition.x, (int)cellPosition.y);
            if (neighbour.djkmincost > cost)
            {
                neighbour.djkmincost = cost;
                neighbour.djkprevious = new Vector2(currentx, currenty);
            }
        }catch { }
    }

    int obcheck(int xPos, int yPos)
    {
        switch ((xPos, yPos))
        {
            case (1, 1):
            case (1, -1):
            case (-1, -1):
            case (-1, 1):
                return 14;
            case (0, -1):
            case (1, 0):
            case (-1, 0):
            case (0, 1):
                return 10;
            default:
                return 0;
        }
    }
    
    
    
    
    
    
     void Sidebar(bool isVertical, bool isLeftorTop, int xPos, int yPos)
    {
        switch ((isVertical, isLeftorTop))
        {
            case (true, true) when isVertical == isLeftorTop:
                cell[xPos, yPos].djkdirX[4] = 5; cell[xPos, yPos].djkdirY[4] = 5;
                cell[xPos, yPos].djkdirX[5] = 5; cell[xPos, yPos].djkdirY[5] = 5;
                cell[xPos, yPos].djkdirX[6] = 5; cell[xPos, yPos].djkdirY[6] = 5;
                break;
            case (false, false) when isVertical == isLeftorTop:
                cell[xPos, yPos].djkdirX[2] = 5; cell[xPos, yPos].djkdirY[2] = 5;
                cell[xPos, yPos].djkdirX[3] = 5; cell[xPos, yPos].djkdirY[3] = 5;
                cell[xPos, yPos].djkdirX[4] = 5; cell[xPos, yPos].djkdirY[4] = 5;
                break;
            case (false, true):
                cell[xPos, yPos].djkdirX[6] = 5; cell[xPos, yPos].djkdirY[6] = 5;
                cell[xPos, yPos].djkdirX[7] = 5; cell[xPos, yPos].djkdirY[7] = 5;
                cell[xPos, yPos].djkdirX[0] = 5; cell[xPos, yPos].djkdirY[0] = 5;
                break;
            case (true, false): 
                cell[xPos, yPos].djkdirX[0] = 5; cell[xPos, yPos].djkdirY[0] = 5;
                cell[xPos, yPos].djkdirX[1] = 5; cell[xPos, yPos].djkdirY[1] = 5;
                cell[xPos, yPos].djkdirX[2] = 5; cell[xPos, yPos].djkdirY[2] = 5;
                break;
            default:
                Debug.Log("One or both measurements are not valid.");
                break;
        }
    }
    void AvaliableCell( int xPos, int yPos, bool isVertical)
    {
        if (isVertical)
        {
            cell[xPos, yPos].djkdirX[6] = 5; cell[xPos, yPos].djkdirY[6] = 5;
            cell[xPos, yPos].djkdirX[7] = 5; cell[xPos, yPos].djkdirY[7] = 5;
            cell[xPos, yPos].djkdirX[0] = 5; cell[xPos, yPos].djkdirY[0] = 5;
            try{cell[xPos, yPos+1].djkdirX[2] = 5; cell[xPos, yPos+1].djkdirY[2] = 5;
                cell[xPos, yPos+1].djkdirX[3] = 5; cell[xPos, yPos+1].djkdirY[3] = 5;
                cell[xPos, yPos+1].djkdirX[4] = 5; cell[xPos, yPos+1].djkdirY[4] = 5;}catch{ }
            try{cell[xPos-1, yPos+1].djkdirX[2] = 5; cell[xPos-1, yPos+1].djkdirY[2] = 5;}catch{ }
            try{cell[xPos-1, yPos].djkdirX[0] = 5; cell[xPos-1, yPos].djkdirY[0] = 5;}catch{ }
            try{cell[xPos+1, yPos+1].djkdirX[4] = 5; cell[xPos+1, yPos+1].djkdirY[4] = 5;}catch{ }
            try{cell[xPos+1, yPos].djkdirX[6] = 5; cell[xPos+1, yPos].djkdirY[6] = 5;}catch{ }
        }else if (!isVertical)
        {
            cell[xPos, yPos].djkdirX[0] = 5; cell[xPos, yPos].djkdirY[0] = 5;
            cell[xPos, yPos].djkdirX[1] = 5; cell[xPos, yPos].djkdirY[1] = 5;
            cell[xPos, yPos].djkdirX[2] = 5; cell[xPos, yPos].djkdirY[2] = 5;
            try{cell[xPos+1, yPos].djkdirX[4] = 5; cell[xPos+1, yPos].djkdirY[4] = 5;
                cell[xPos+1, yPos].djkdirX[5] = 5; cell[xPos+1, yPos].djkdirY[5] = 5;
                cell[xPos+1, yPos].djkdirX[6] = 5; cell[xPos+1, yPos].djkdirY[6] = 5;}catch{ }
            try{cell[xPos, yPos-1].djkdirX[0] = 5; cell[xPos, yPos-1].djkdirY[0] = 5;}catch{ }
            try{cell[xPos+1, yPos-1].djkdirX[6] = 5; cell[xPos+1, yPos-1].djkdirY[6] = 5;}catch{ }
            try{cell[xPos, yPos+1].djkdirX[2] = 5; cell[xPos, yPos+1].djkdirY[2] = 5;}catch{ }
            try{cell[xPos+1, yPos+1].djkdirX[4] = 5; cell[xPos+1, yPos+1].djkdirY[4] = 5;}catch{ }
        }
    }
}
