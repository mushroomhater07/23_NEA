using System.Collections;
using System;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
// using Jint;

public class java : MonoBehaviour{}
// {
//     private Engine engine;
//     private db db1;
//     // Start is called before the first frame update
//     void Start()
//     {
//         db1 = GetComponent<db>();
//         db1.Query("CREATE TABLE ");
//       engine = new Engine();
//       engine.SetValue("log", new Action<object>(msg => Debug.Log(msg)));

//       engine.Execute(@"
//         var myVariable = 108;
//         log('Hello from Javascript! myVariable = '+myVariable);
//       ");
//         engine.SetValue("myFunc", 
//     new Func<int, string>(number => "C# can see that you passed: "+number));
//         engine.Execute(@"
//     var responseFromCsharp = myFunc(108);
//     log('Response from C#: '+responseFromCsharp);        
//   ");
//    engine.Execute(File.ReadAllText("Assets/index.js"));