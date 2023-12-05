using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PopQuiz : MonoBehaviour
{
    int counter = 0;
    double mod3;
    double mod5;
    double sum3;
    double sum5;
    // Start is called before the first frame update
    void Start()
    {
        
        for (int i = 0; i < 3; i++)
        {
            Debug.Log("for loop: "+ i);
        }
        do
        {
            counter ++;
            counter += 1;
            counter = counter - 1;
        }while (counter < 10);
        Debug.Log("The loop stopped at: "+ counter.ToString());
        
        for (int i = 0; i < 101; i++){
            mod5 = i % 5;
            mod3 = i % 3;
            if (mod3 == 0)
            {
                sum3 += i;
            }
            if (mod5 == 0) {
                sum5 += i;
            }
        }
        Debug.Log(sum3.ToString() + " " + sum5.ToString());
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
