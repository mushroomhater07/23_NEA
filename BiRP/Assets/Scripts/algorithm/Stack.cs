using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Stack
{
    object[] _stack_arr;
    private int _pointer;
    public int pointer => _pointer;
    public Stack(int _numberofsize){
        _pointer = -1;
        _stack_arr = new object[_numberofsize];
    }
    public void Push(object data) {
        if (pointer < _stack_arr.Length - 1) {
            //if pointer 38 < (40-1 = 39)
            _pointer = pointer + 1;
            _stack_arr[pointer] = data;
        }
    }

    public bool Contains(object data)
    {
        foreach (var VARIABLE in _stack_arr)
        {
            if (VARIABLE == data) return true;
        }return false;
    }
    public object Pop() {
        if (pointer >= 0){
            _pointer = pointer - 1;
            return _stack_arr[pointer+1];
        }
        else return null;
    }
    public object Peek(){
        if (pointer == -1) return null; 
        else return _stack_arr[pointer];
    }
}