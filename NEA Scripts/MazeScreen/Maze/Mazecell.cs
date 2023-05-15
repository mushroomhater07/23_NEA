using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Mazecell : MonoBehaviour{
   public bool visited = false;
   public List<string> dir = new List<string>{"up","down","left","right"};
    // bool up, down, left, right, upleft, upright, botleft,botright;
    
    //dijstrka
    public float djkmincost = float.MaxValue;
    public Vector2 djkprevious;
    public bool djkvisited = false;
    public int[] djkdirX = { 1, 1, 1, 0, -1, -1, -1, 0 };
    public int[] djkdirY = { 1, 0, -1, -1, -1, 0, 1, 1 };
    

    //Astar
    public float ghost, hcost, fcost;
    public Vector2 Aprevious;
    public bool Avisited;
    public bool[] adir = new bool[8]{ false,false,false,false,true,true,true,true};
}
