using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class Checking{
// for (int i = 1; i < 1000; i++) { Console.WriteLine("{0}:{1}", i, (char)i); }
// string? password = Console.ReadLine();

    public static bool check(string password)
    {
        password = password.Trim();
        foreach (char a in password){
            switch ((int)a)
            {
                case int i when i >= 48 && i <= 57:
                    break;
                case int i when i >= 65 && i <= 90:
                    break;
                case int i when i >= 97 && i <= 122:
                    break;
                default:
                    return true;
            }
        }
        return false;
    }
    //48 to 57 number
     //65 to 90 upper
     //97 to 122 lower
}