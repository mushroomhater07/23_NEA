using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using Random = UnityEngine.Random;

public class MazeGeneration : MonoBehaviour
{
    private List<String> wall;
    private Mazecell[,] cell;
    private Stack stack1 = new Stack(100);
    int startx,starty,endx,endy;

    private djk algo;
    public MazeGeneration(Mazecell[,] cells, List<String> walls){  
        cell = cells;
        wall = walls;
        Debug.Log("buildmaze");
        BuildMaze(0,0);
    }
    void BuildMaze(int x, int y){
        Mazecell currentcell = cell[x,y];
        currentcell.visited = true;
        stack1.Push(currentcell);
        while(stack1.pointer >= 0){
            currentcell = stack1.Pop() as Mazecell;
            checkdir(x,y);
            if(currentcell.dir.Count()>0){
                stack1.Push(currentcell);
                int element = Random.Range(0, currentcell.dir.Count());
                string now = currentcell.dir[element];
                currentcell.dir.RemoveAt(element);
                // Debug.Log(x+""+y);
                try{
                switch(now){
                    case "up":
                        // Debug.Log("u");
                        Destroy(GameObject.Find(System.String.Format("Wall {0}-{1}-H",x-1,y)));
                        wall.Remove(System.String.Format("Wall {0}-{1}-H", x - 1, y));
                        cell[x-1,y].visited = true;
                        
                        stack1.Push(cell[x-1,y]);x -=1;
                        break;
                    case "down":
                        // Debug.Log("d");
                        Destroy(GameObject.Find(System.String.Format("Wall {0}-{1}-H",x,y)));
                        wall.Remove(System.String.Format("Wall {0}-{1}-H", x, y));
                        cell[x+1,y].visited = true;
                        
                        stack1.Push(cell[x+1,y]);x++;
                        break;
                    case "left":
                        // Debug.Log("l");
                        Destroy(GameObject.Find(System.String.Format("Wall {0}-{1}-V",x,y-1)));
                        wall.Remove(System.String.Format("Wall {0}-{1}-V", x, y - 1));
                        cell[x,y-1].visited = true;
                        
                        stack1.Push(cell[x,y-1]);y-=1;
                        break;
                    case "right":
                        // Debug.Log("right");
                        Destroy(GameObject.Find(System.String.Format("Wall {0}-{1}-V",x,y)));
                        wall.Remove(System.String.Format("Wall {0}-{1}-V", x, y));
                        cell[x,y+1].visited = true;
                        
                        stack1.Push(cell[x,y+1]);y++;
                        break;
                }
                } catch{stack1.Pop();}
            }
        } algo = new djk(0, 0, 5, 5,cell, wall);
    }
    void checkdir(int x, int y){
        try{if(cell[x-1,y].visited){
            cell[x,y].dir.Remove("up");
        }}catch{}
        try{if(cell[x+1,y].visited){
            cell[x,y].dir.Remove("down");
        }}catch{}
        try{if(cell[x,y-1].visited){
            cell[x,y].dir.Remove("left");
        }}catch{}
        try{if(cell[x,y+1].visited){
            cell[x,y].dir.Remove("right");
        }}catch{}
        }
}