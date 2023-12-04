using System;
using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using System.IO;
using System.Threading.Tasks;

namespace MenuScreen.panels
{
    public class SlotSelectionPanel : MenuPanels
    {
        private string filePath;
        public override void Start()
        {
            filePath = Application.persistentDataPath;
            Button[] buttonSlot = gameObject.transform.Find("Slot").GetComponentsInChildren<Button>();
            for (int i = 0; i < buttonSlot.Length; i++)
            {
                int dummyi = i;
                if(i%2 == 0) {dummyi /=2;
                buttonSlot[i].onClick.AddListener(delegate{SavefileSelector(dummyi);});}
                else {dummyi = (dummyi-1)/2;
                buttonSlot[i].onClick.AddListener(delegate{popUpDetail(dummyi); });}
            }
            base.Start();
        }

        public void SavefileSelector(int index = 0)
        {
            
            //file check slot1 exist
            //if not, image = not exist (create new [first time])
            //if exist
            Singleton.Instance.LoadNumber = index;
            string path = filePath + "/continue.txt";
            Debug.Log(File.Exists(path));
            // StreamWriter writer = new StreamWriter(path, false);
            // Write some text to the file
            File.WriteAllText(path,index.ToString());
            // writer.Close();
            Debug.Log(index.ToString());
            if (File.Exists($"{filePath}/Save{index}.sqlite3"))
            {
                Debug.Log("!ft");
                Singleton.Instance.FirstTime = false;
            Singleton.LoadScreenclass.LoadScreen(true, false, SceneManager.GetActiveScene().buildIndex + 2, true, true,
                true);
        }
        else{    Debug.Log("ft");
                Singleton.Instance.FirstTime = true;
                // File.Create($"{filePath}/Save{index}.maze");
                Task.Run(() => Singleton.Localdb.Query(@"CREATE TABLE GAMEDATA ('characterSelection' INTEGER, 'playerX' FLOAT, 'playerY' FLOAT , 'playerZ' FLOAT );",
                        $"Save{index}.sqlite3")
                ).Wait();
                Singleton.LoadScreenclass.LoadScreen(true,false,SceneManager.GetActiveScene().buildIndex+1,true,true,true);
            }

        }

        public void DeleteSlot(int index)
        {
            Task.Run(() =>
            {
                Singleton.Localdb.Query($"DROP TABLE IF EXISTS GAMEDATA",
                    $"Save{index}.sqlite3");
            }).Wait();
            try{File.Delete($"{Application.persistentDataPath}/Save{index}.sqlite3");}catch {}
            try{File.Delete(Application.persistentDataPath + "/continue.txt");}catch {}
            FindObjectOfType<MainMenuManager>().ContinueButt.interactable = false;
            
        }
        private void popUpDetail(int index)
        {
            Singleton.Instance.ShowDetail($"Game Save #{index}",
                    $"Last Play: {File.GetLastWriteTime(Application.persistentDataPath + $"/Save{index}.sqlite3")}\n",
                    Resources.Load<Sprite>("Sprite/Star"));
        }
    }
}