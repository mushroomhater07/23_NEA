using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;

public class CQueue
{
    int[] _queue;
    bool _circular = false;
    int _frontofqueue = -1, _rearofqueue = -1, _numberofitem;

    public CQueue(bool circular, int numberofitem)
    {
        this._circular = circular;
        this._numberofitem = numberofitem;
        _queue = new int[numberofitem];
    }

    public int[] Queue1 => _queue;

    public void Enqueue(int data)
    {
        if (_circular == false || (((_rearofqueue + 1) % _numberofitem + 1) == _frontofqueue))
            // full and circular = false
        { }
        else {
            _rearofqueue = (_rearofqueue + 1) % _numberofitem;
            _queue[_rearofqueue] = data;
        }
        
    }
    public int Dequeue()
    {
        if (_circular == false || (((_frontofqueue + 1) % _numberofitem + 1) == _rearofqueue)) 
            // is Empty and circular = true 
        return -1;
        else {
            _frontofqueue = (_frontofqueue + 1) % _numberofitem;
            return _queue[_frontofqueue];
        }
        
    }
    public int Peek()
    {
        if (_rearofqueue == -1) // and dequeue all
            return -1;
        else {
            int frontofqueue = (this._frontofqueue + 1) % _numberofitem;
            return _queue[frontofqueue];

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