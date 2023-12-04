using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.SceneManagement;

public class gameOver : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        Singleton.Instance.init();
        Singleton.Instance.GameOver = false;
        var time = Singleton.Instance.Time1;
        var mons = FindObjectOfType<MazeManager>().MonsterKilled;
        Task.Run(() => 
            Singleton.Localdb.Query($"UPDATE GAMEDATA SET time = {time}, monsterKilled = {mons}",
                $"Save{Singleton.Instance.LoadNumber}.sqlite3")).Wait();
        Singleton.LoadScreenclass.LoadScreen(true, false, SceneManager.GetActiveScene().buildIndex + 1, true, true);
    }
}

