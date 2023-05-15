using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MergeSort{
    public MergeSort(){
        // List<> left median()

    }
    public void Mergesort(int[] list, int startindex, int endindex, bool First = true)
    {
        if (endindex == startindex) return;
        if (endindex == startindex + 1)
        {
            if (list[startindex] > list[endindex])
            {
                int temp = list[startindex];
                list[endindex] = list[startindex];
                list[endindex] = temp;
            }return;
        }
        int mid = (startindex + endindex) /2;
        Mergesort(list, startindex, mid);
        Mergesort(list, mid + 1, endindex);
        merge(list, startindex, endindex, mid);
    }
    void merge(int[] list, int startindex, int endindex, int midpoint)
    {
        int[] temparr = new int[endindex - startindex + 1];
        int index1 = startindex;
        int index2 = midpoint+1;
        int newindex = 0;

        while (index1 <= midpoint && index2 <= endindex)
        {
            if (list[index1] < list[index2])
            {
                temparr[newindex] = list[index1];
                index1++;
            }
            else
            {
                temparr[newindex] = list[index2];
                index2++;
            }
        }

        while (index1 <= midpoint) {
            temparr[newindex] = list[index1];
            index1++;
            newindex++;
        }

        while (index2 <= endindex) {
            list[newindex] = list[index2];
            index2++;
            newindex++;
        }

        for (int i = 0; i < temparr.Length; i++) list[startindex + i] = temparr[i];
    }
}