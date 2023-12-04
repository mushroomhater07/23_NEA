using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using Newtonsoft.Json;
using Random = UnityEngine.Random;

public class MazeGeneration : MonoBehaviour
{
    [SerializeField] private Transform _myParent;
    [SerializeField] private List<String> wall;
    [SerializeField] private Mazecell[,] cell ;
     private Stack stack1 = new(100);

    public Transform myParent
    {
        get => _myParent;
        set => _myParent = value;
    }

    public List<string> Wall
    {
        get => wall;
        set => wall = value;
    }

    public Mazecell[,] Cell
    {
        get => cell;
        set => cell = value;
    }

    // private djk algo;
    public void Run()
    {
        BuildMaze(0,0);
    }
    void BuildMaze(int x, int y){
        // Debug.Log(_myParent);
        Mazecell currentcell = cell[x,y];
        currentcell.visited = true;
        stack1.Push(currentcell);
        while(stack1.pointer >= 0){
            currentcell = stack1.Pop() as Mazecell;
            Checkdir(x,y);
            if(currentcell.dir.Any()){
                stack1.Push(currentcell);
                int element = Random.Range(0, currentcell.dir.Count());
                string now = currentcell.dir[element];
                currentcell.dir.RemoveAt(element);
                // Debug.Log(x+""+y);
                try
                {
                    switch (now)
                    {
                        case "up":
                            // Debug.Log("u");
                            // Destroy(_myParent.transform.Find(String.Format("Wall {0}-{1}-H",x-1,y)).gameObject);
                            wall.Remove(String.Format("Wall {0}-{1}-H", x - 1, y));
                            cell[x - 1, y].visited = true;

                            stack1.Push(cell[x - 1, y]);
                            x -= 1;
                            break;
                        case "down":
                            // Debug.Log("d");
                            // Destroy(_myParent.transform.Find(System.String.Format("Wall {0}-{1}-H",x,y)).gameObject);
                            wall.Remove(System.String.Format("Wall {0}-{1}-H", x, y));
                            cell[x + 1, y].visited = true;

                            stack1.Push(cell[x + 1, y]);
                            x++;
                            break;
                        case "left":
                            // Debug.Log("l");
                            // Destroy(_myParent.transform.Find(System.String.Format("Wall {0}-{1}-V",x,y-1)).gameObject);
                            wall.Remove(System.String.Format("Wall {0}-{1}-V", x, y - 1));
                            cell[x, y - 1].visited = true;

                            stack1.Push(cell[x, y - 1]);
                            y -= 1;
                            break;
                        case "right":
                            // Debug.Log("right");
                            // Destroy(_myParent.transform.Find(System.String.Format("Wall {0}-{1}-V",x,y)).gameObject);
                            wall.Remove(System.String.Format("Wall {0}-{1}-V", x, y));
                            cell[x, y + 1].visited = true;

                            stack1.Push(cell[x, y + 1]);
                            y++;
                            break;
                    }
                }
                catch
                {
                    stack1.Pop();
                }
            }
        } 
        // algo = new djk(0, 0, 5, 5,cell, wall);
    }

    private void Checkdir(int x, int y){
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