using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.CSharp;

public class lList{
    object[,] dataNmemoryloc;
    int Headloc = -1;
    
    public lList(int num) {
        dataNmemoryloc = new object[num,4];
        for (int i = 0; i < num; i++) { dataNmemoryloc[i, 0] = true; }
    }
    public void AddHead(object data)
    {
        int temp = Headloc;
        Headloc = AddValue(data);
        if (Headloc == -1) { dataNmemoryloc[Headloc, 3] = null; }
        else{ dataNmemoryloc[Headloc, 3] = temp; }
    }
    int? GetNextPointer(int num) { return (int?)dataNmemoryloc[num, 3]; }
    dynamic GetBlockData(int num) { return (dynamic)dataNmemoryloc[num, 1]; }
    public void AddFoot(object data) {
        int newloc = AddValue(data);
        int pointer = Headloc;
        if (dataNmemoryloc[pointer, 3] != null) pointer = (int)GetNextPointer(pointer); 
        dataNmemoryloc[pointer,3] = newloc;// was last one
        dataNmemoryloc[newloc, 3] = null; //is last one
    }
    int? Search(object datatofind, int loc,bool firstTime) //use base case control recursion but one return needed?
    {   if (firstTime) { loc = (int)Headloc; firstTime = false; }
        object data = GetBlockData(loc);
        if (data == null) { return -1;
        }else if (data != datatofind) {
            loc = (int)GetNextPointer(loc);
            Search(datatofind, loc, firstTime);
            return null;
        }
        else return loc;
    }

    List<dynamic> Traversal(List<dynamic> list, int loc, bool firstTime = true)
    {
        if (firstTime) { list = new List<dynamic>(); loc = Headloc; firstTime = false; }
        object data = GetBlockData(loc);
        if (data != null)
        {
            list.Add(data);
            Traversal(list, (int)GetNextPointer(loc), false);
            return null;
        }else { return list; }
    }
    int? SearchPriority(int priority, int loc = -1, bool firstTime= true) {
        if(firstTime) { loc = (int)Headloc; firstTime = false; }
        if(priority <= (int)dataNmemoryloc[loc, 2])
        {//repeat
            loc = (int)dataNmemoryloc[loc, 2];
            SearchPriority(priority, loc, firstTime);
            return null;
        }else { return loc; }
    }
    void AddWithPriority(object inputdata, int priority)
    {
        int temp = (int)dataNmemoryloc[(int)SearchPriority(priority), 2];        
        int newloc = AddValue(inputdata, priority);
        dataNmemoryloc[temp, 2] = newloc;
        dataNmemoryloc[newloc, 2] = temp;
    }
    int AddValue(object data, int priority = 5)
    {
        List<int> heap = new List<int>();
        for (int i = 0; i < dataNmemoryloc.GetLength(0); i++) {
            if ((bool)dataNmemoryloc[i, 0]) { heap.Add(i); } }
        int newloc = Random.Range(0,heap.Count);
        dataNmemoryloc[newloc, 0] = false;
        dataNmemoryloc[newloc, 1] = (dynamic)data;
        dataNmemoryloc[newloc, 2] = priority;
        return newloc;
    }
}