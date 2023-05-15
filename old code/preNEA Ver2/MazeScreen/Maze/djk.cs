using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class djk : MonoBehaviour
{
    private List<String> wall;
    private Mazecell[,] cell;
    private int sizeX, sizeY;
    
    //nodex y visited cost previous
    public djk(int startx, int starty, int endx, int endy,Mazecell[,] cells, List<String> walls)
    {
        cell = cells;
        wall = walls;
        
        List<Vector2> ready = startsearch(startx, starty, endx, endy);
        foreach (var item in ready)
        {
            Debug.Log(item);
        }
    }

    void setup1()
    {
        sizeX = cell.GetLength(0);
        sizeY = cell.GetLength(1);
        for (int x = 0; x < cell.GetLength(0)-1; x++)
        {
            for (int y = 0; y < cell.GetLength(1)-1; y++)
            {
                // if (wall.IndexOf(String.Format("Wall {0}-{1}-V", x, y)) == -1)
                //     VerticalWall(x,y);
                // if (wall.IndexOf(String.Format("Wall {0}-{1}-H", x, y)) == -1)
                //     HorizontalWall(x,y); 
            }
        }
        for (int x = 0; x < cell.GetLength(0) - 1; x++)
        {   
            for (int y = 0; y < cell.GetLength(1) - 1; y++)
            {
                Mazecell current = cell[x, y];
                if (x == 0)  current.djkdir[0] = false; //up
                if (x == sizeX - 1) current.djkdir[1] = false;//down
                if (y == 0) current.djkdir[2] = false; //left
                if (y == sizeY - 1) current.djkdir[3] = false;//right
            
                if (!current.djkdir[0]) {//up
                    Debug.Log("up");
                    current.djkdir[4] = false;
                    current.djkdir[5] = false;
                } if (!current.djkdir[1]) {//down
                    Debug.Log("d");
                    current.djkdir[6] = false;
                    current.djkdir[7] = false;
                } if (!current.djkdir[2]) {//left
                    Debug.Log("l");
                    current.djkdir[4] = false;
                    current.djkdir[6] = false;
                } if (!current.djkdir[3]) {//right
                    Debug.Log("r");
                    current.djkdir[5] = false;
                    current.djkdir[7] = false;
                }
            }
        }
    }
    void HorizontalWall(int x, int y) {
        Debug.Log("have H wall");
        cell[x, y].djkdir[1] = true; //down
        // cell[x + 1, y].djkdir[0] = true; //up
        }
    void VerticalWall(int x, int y) {
        Debug.Log("have V wall");
        cell[x, y].djkdir[3] = true; //right
        // cell[x, y + 1].djkdir[2] = true; //left
    }
    private List<Vector2> startsearch(int startx, int starty, int endx, int endy) {
        setup1();
        bool nextnode = true, searchdirection = true;
        float mincost = float.MaxValue;
        int currX = 0, currY = 0;
        cell[startx, starty].djkmincost = 0;
        while (nextnode) {
            nextnode = false;
            for (int i = 0; i < sizeX; i++) {
                for (int j = 0; j < sizeY; j++) {
                    if (cell[i, j].djkmincost < mincost && !cell[i,j].djkvisited) {
                        mincost = cell[i, j].djkmincost;
                        currX = i;
                        currY = j;
                    }
                }
            }
            while (searchdirection) {
                searchdirection = false;
                
                List<int> index  = new List<int>();
                for (int i = 0; i < cell[currX,currY].djkdir.Length; i++)
                {
                    if (cell[currX, currY].djkdir[i])
                    {
                        index.Add(i);
                        searchdirection = true;
                    }
                }

                if (cell[currX, currY].djkdir.Length != 0)
                {
                    foreach (var VARIABLE in index)
                    {
                        Debug.Log(VARIABLE); }Debug.Log(index[0]);
                    switch (index[0])
                    {
                        case 0: obcheck(currX-1, currY, currX, currY, false, cell[currX, currY].djkmincost); break;
                        case 1: obcheck(currX+1, currY, currX, currY, false, cell[currX, currY].djkmincost); break;
                        case 2: obcheck(currX, currY-1, currX, currY, false, cell[currX, currY].djkmincost); break;
                        case 3: obcheck(currX, currY+1, currX, currY, false, cell[currX, currY].djkmincost); break;
                        case 4: obcheck(currX-1, currY-1, currX, currY, true, cell[currX, currY].djkmincost); break;
                        case 5: obcheck(currX-1, currY+1, currX, currY, true, cell[currX, currY].djkmincost); break;
                        case 6: obcheck(currX+1, currY-1, currX, currY, true, cell[currX, currY].djkmincost); break;
                        case 7: obcheck(currX+1, currY+1, currX, currY, true, cell[currX, currY].djkmincost); break;
                    }
                    index.RemoveAt(0);
                }
                if (!searchdirection) cell[currX, currY].djkvisited = true;
            }

            if (cell[endx, endy] != cell[currX, currY]) nextnode = true;
        }

        List<Vector2> retunval = new List<Vector2>();
        retunval.Add(cell[endx,endy].djkprevious);
        while (retunval[-1].x != startx && retunval[-1].y != starty) {
            retunval.Add(cell[(int)(retunval[-1].x),(int)(retunval[-1].y)].djkprevious);
        }
        return retunval;
    }

    void obcheck(int x, int y, int currX, int currY ,bool oblique, float currentcost) {
        if (oblique) currentcost += 14;else currentcost += 10;
        if (cell[x, y].djkmincost > currentcost)
        {
            cell[x, y].djkprevious = new Vector2(currX, currY);
            cell[x, y].djkmincost = currentcost;
        }

    }
    // private void calcost(w,h){
        //     if(walkable && !visited){
        //         newcost = nodes[prevx, prevy].cost + cost
        //         if(newcost < nodes[w,h].cost){
        //             nodes[prevx,prevy].prev = 
        //             nodes[w,h].cost = newcost
        //         }
        //     }
            
        // }
}// foreach (var item in cell)
// {
//     if (item.djkvisited = false) nextnode = true;
// }
