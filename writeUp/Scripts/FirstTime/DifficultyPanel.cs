using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class DifficultyPanel : MenuPanels
{
    private Slider diffi;

    public override void Start()
    { diffi = FindObjectOfType<Slider>();
        base.Start();
    }
    public void load()
    {
        Task.Run((() => Singleton.Localdb.Query("ALTER TABLE GAMEDATA ADD difficulty INTEGER",$"Save{Singleton.Instance.LoadNumber}.sqlite3"))).Wait();
        Task.Run((() => Singleton.Localdb.Query($"INSERT INTO GAMEDATA(difficulty) VALUES ({diffi.value})",$"Save{Singleton.Instance.LoadNumber}.sqlite3"))).Wait();
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }
    
    // Update is called once per frame
    void Update()
    {
        Singleton.Instance.Difficulty = (int)diffi.value;
    }
}