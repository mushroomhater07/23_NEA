using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class grid : MonoBehaviour
{
    private int width;
    private int height;
    private int[,] gridarray;
    public grid(int width, int height){
        this.width = width;
        this.height = height;
        gridarray = new int[width,height];
    }
}
