using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Serialization;

public class Clock : MonoBehaviour
{
    private Light light;
    Vector3 rotate = Vector3.zero;
    public float time;
    [SerializeField] private TMP_Text text;
    public int date;

    public float Time1 => time;

    void Start()
    {
        date = 0;
        light = FindObjectOfType<Light>();
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        Singleton.Instance.Time1 = time;
        time += Time.deltaTime /2.5f; //add 1 every second
     
        
        // Debug.Log(time);
        if (time % 24 < 0.01f) // Check if time is a multiple of 24
        {
            FindObjectOfType<MazeManager>().openGate();
            date += 1;
            date %= 2;
            if (date == 1)
            {
                FindObjectOfType<MazeManager>().spawnMonster();
            }
        }
        text.text = $"{(int)time%24}:{Mathf.FloorToInt(60f * (time - (int)time))}"; //clamp between 0 to 24
        rotate.x = (time % 24f * 360f / 24f); //times rotation
        // Debug.Log("time" + time + "rotate: " + rotate.x);
        light.transform.rotation = Quaternion.Euler(rotate);
    }
    
    //count for monster
    //maze number open
    //item drop
    //score


   
}

// public Text timerText;
// public float startTime;
// private float timer;
//
// void Start()
// {
//     timer = startTime;
// }
//
// void Update()
// {
//     timer -= Time.deltaTime;
//     int minutes = Mathf.FloorToInt(timer / 60);
//     int seconds = Mathf.FloorToInt(timer % 60);
//     timerText.text = string.Format("{0:00}:{1:00}", minutes, seconds);
//
//     if (timer <= 0f)
//     {
//         timer = startTime;
//         StartCoroutine(RunSubRoutine());
//     }
// }
//
// IEnumerator RunSubRoutine()
// {
//     // Do your sub-routine logic here
//     Debug.Log("Running sub-routine...");
//
//     yield return new WaitForSeconds(60f); // Wait for 60 seconds before running again
// }
// }
