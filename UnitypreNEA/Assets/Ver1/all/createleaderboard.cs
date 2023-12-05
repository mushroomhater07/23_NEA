using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

public class createleaderboard : MonoBehaviour
{
    // Start is called before the first frame update
    
    void Start()
    {
        GameObject game = transform.GetChild (0).gameObject;
        GameObject g;
        for(int i = 0; i < 5; i++){
            g = Instantiate (game, transform);
            g.transform.GetChild (1).GetComponent<Text>().text = "i";

        }
        Destroy(game);
    }
    [System.Serializable]
public class Leaderboard{
    public string username { get; set; }
    public int level { get; set; }
    public int score { get; set; }
    public DateTime since { get; set; }
}
[System.Serializable]
public class Leaderboardlist{
    public Leaderboard[] uklist;
}
    // Update is called once per frame
    void Update()
    {
        
    }
}
