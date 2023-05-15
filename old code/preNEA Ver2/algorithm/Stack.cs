using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Stack
{
    object[] stack;
    private int _pointer;
    public int pointer => _pointer;
    public Stack(int _numberofsize){
        _pointer = -1;
        stack = new object[_numberofsize];
    }
    public void Push(object data) {
        if (pointer < stack.Length - 1) {
            //if pointer 38 < (40-1 = 39)
            _pointer = pointer + 1;
            stack[pointer] = data;
        }
    }

    public object Pop() {
        if (pointer >= 0){
            _pointer = pointer - 1;
            return stack[pointer+1];
        }
        else return null;
    }
    public object Peek(){
        if (pointer == -1) return null; 
        else return stack[pointer];
    }
}