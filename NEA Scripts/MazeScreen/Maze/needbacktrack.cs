using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class mazegeneration12 : MonoBehaviour
{
    Mazecell[,] cell;
    Stack stack1 = new Stack(1000);
    int startx,starty,endx,endy;
    
    public mazegeneration12(Mazecell[,] cell1){   cell = cell1;     
    Run();      
        }
    void Run(){
        Debug.Log("runcount");
        BuildMaze(0,0);
        Notify();
    }
    void Notify(){
        
        bool again = false;
        foreach (var item in cell)
        {
            if (!item.visited) again = true;
        }
        if(again){
            Run();
        }
    }
    //it works but after reach dead-end it stop
    int BuildMaze(int x, int y){ 
        Mazecell currentcell = cell[x,y];
        currentcell.visited = true;
        checkdir(x,y);
        if(currentcell.dir.Count()>0){
            int element = Random.Range(0, currentcell.dir.Count());
            string now = currentcell.dir[element];
            currentcell.dir.RemoveAt(element);
            switch(now){
                case "up":
                    Destroy(GameObject.Find(System.String.Format("Wall {0}-{1}-H",x-1,y)));
                    return BuildMaze(x-1,y);
                    break;
                case "down":
                    Destroy(GameObject.Find(System.String.Format("Wall {0}-{1}-H",x,y)));
                    return BuildMaze(x+1,y);
                    break;
                case "left":
                    Destroy(GameObject.Find(System.String.Format("Wall {0}-{1}-V",x,y-1)));
                    return BuildMaze(x,y-1);
                    break;
                case "right":
                    Destroy(GameObject.Find(System.String.Format("Wall {0}-{1}-V",x,y)));
                    return BuildMaze(x,y+1);
                    break;
                default:
                    return 0;
            }
        }else{
            return 0;
        }
    }
    void checkdir(int x, int y){
        try{if(cell[x-1,y].visited){
            Debug.Log("remove up");
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
    

    //     cell[x,y].visited = true;
    //     stack1.Push(cell[x,y]);
    //     while(stack1.Count != 0){
    //         currentcell = stack1.Pop() as Mazecell;
            
    //         
    //     }
    // }
}
