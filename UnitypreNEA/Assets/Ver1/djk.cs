using System.Collections;
using System.Collections.Generic;
using UnityEngine;

class node{
    public bool visited;public double cost;
    int? previousx;int? previousy;
    public node(){
        // this.nodex = x;this.nodey = y;
        this.visited = false;
        this.cost = double.PositiveInfinity;
        this.previousx = null;this.previousy = null;
    }
}

public class djk : MonoBehaviour
{
    //nodex y visited cost previous
    node[,] nodes;
    public djk(int endx, int endy, int startx, int starty, int[,] grid){
        for (int h = 0; h < grid.GetLength(1); h++)
        {
            for (int w = 0; w < grid.GetLength(0); w++)
            {
                nodes[w,h] = new node();
            }
        }
        nodes[startx, starty].cost = 0;
        startsearch(startx, starty);
    }
    private void startsearch(int x, int y){
        if(nodes[x + 1, y].visited == true)
        nodes[x + 1, y].cost = nodes[x, y].cost + 10;
        nodes[x - 1, y].cost = nodes[x, y].cost + 10;
        nodes[x ,y - 1].cost = nodes[x, y].cost + 10;
        nodes[x ,y + 1].cost = nodes[x, y].cost + 10;
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
}
