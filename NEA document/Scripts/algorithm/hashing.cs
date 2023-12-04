using System;
using System.Collections.Generic;
using UnityEngine;

namespace algorithm
{
    public class hashing : MonoBehaviour
    {
        public int Convert(string key) {
            int hashvalue = 0;
            int count = 7;
            foreach (var ch in key)
            {
                hashvalue += (int)((int)ch * Mathf.Pow(10, count));
                // Math.Pow(7,count)
                count -= 1;
            }
            return hashvalue/key.Length;
        }

        public void HashTable(string[] list)
        {
            int count = 0;
            Dictionary<int, object> table = new Dictionary<int, object>();
            for (int i = 0; i < list.Length; i++)
            {
                int hashvalue = Convert(list[count]);
                if (!table.TryAdd(hashvalue, list[count]))
                {
                    //linear probing
                    while (!table.TryAdd(hashvalue,list[count])) hashvalue++;
                    //chaining
                    string temp = (string)table[hashvalue]; lList list1;
                    if (table[hashvalue].GetType() != typeof(string))
                    {
                        list1 = new lList(list.Length);
                        list1.AddHead(temp);
                    }else list1 = (lList)table[hashvalue];
                    list1.AddFoot(list[count]);
                } count++;
            }
        }
    }
}