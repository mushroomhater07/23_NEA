using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Queue
{
    object[] queue;
    bool circular = false;
    int frontofqueue = -1, rearofqueue = -1, numberofitem;

    public Queue(bool _circular, int _numberofitem)
    {
        circular = _circular;
        numberofitem = _numberofitem;
        queue = new object[_numberofitem];
    }
    public void Enqueue(object data)
    {
        if (circular == false || (((rearofqueue + 1) % numberofitem + 1) == frontofqueue))
            // full and circular = false
        { }
        else {
            rearofqueue = (rearofqueue + 1) % numberofitem;
            queue[rearofqueue] = data;
        }
    }
    public object Dequeue()
    {
        if (circular == false || (((frontofqueue + 1) % numberofitem + 1) == rearofqueue)) 
            // is Empty and circular = true 
        return null;
        else {
            frontofqueue = (frontofqueue + 1) % numberofitem;
            return queue[frontofqueue];
        }
        
    }
    public object Peek()
    {
        if (rearofqueue == -1) // and dequeue all
            return null;
        else {
            int _frontofqueue = (frontofqueue + 1) % numberofitem;
            return queue[_frontofqueue];

        }
    }
}
// public class HowAnArrayWork //HowAnArrayWork
        // {
        //     int[] que = new int[2] { 10, 15 }; // array= 0:10, 1:15
        //     que[1] = 14;
        //     foreach (int i in que) Console.WriteLine(i); // i = 10 , 15
        //
        //     for (int i = 0; i < que.Length; i++) Console.WriteLine(i); // 0 and 1
        //     Console.ReadLine();
        // }