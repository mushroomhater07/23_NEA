using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class BinarySearch : MonoBehaviour
{//need orderedlist // need hashed value
    int Search(int[] list, int find, int min, int max)
    {
        if (max >= min)
        {
            int mid = (new Func<int>(() => Mathf.FloorToInt((min + max) / 2)))();
            if (find == list[mid]) return mid;
            else if (find < list[mid]) return Search(list, find, min, mid - 1);
            else return Search(list, find, mid + 1, max); //(find > list[mid])
        }
        else return -1;
    }
}