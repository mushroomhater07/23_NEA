
using System.IO;
using System.Threading.Tasks;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class escapedcontroller : MonoBehaviour
{
    [SerializeField] private TMP_Text time, monster, difficulties;
    [SerializeField] private GameObject gameOverPanel, PassedPanel;
    [SerializeField] private GameObject mainPanel, loginPanel;
    [SerializeField]private Button CloseButton;
    private string username;

    private void Start()
    {
        var SaveNumber = Singleton.Instance.LoadNumber;
        File.ReadAllText(Application.persistentDataPath + "/continue.txt");
        var result = Task.Run(() => 
            Singleton.Localdb.Query("SELECT time, monsterKilled FROM GAMEDATA",
                $"Save{Singleton.Instance.LoadNumber}.sqlite3")).Result.Split(";");
        time.text = result[0];
        monster.text = result[1];

        difficulties.text = Singleton.Instance.Difficulty.ToString();
        Singleton.Instance.init();
        if (Singleton.Instance.GameOver)
        {
            gameOverPanel.SetActive(true);
            PassedPanel.SetActive(false);
        }
        else
        {
            PassedPanel.SetActive(true);
            gameOverPanel.SetActive(false);
        }
    }

    private void Update()
    {
        if (Singleton.Instance.Loggedin)
            CloseButton.interactable = true;
            else CloseButton.interactable = false;
    }

    public void Upload()
    {
        var result = Task.Run(() =>Singleton.CsharpAPI.GetData(true,
            "INSERT INTO `Progress`( `playerID`, `levelID`, `score`, `time`) VALUES (?,?,?,?)",
            $"{Singleton.Instance.playerID},{difficulties.text},{monster.text},{time.text}")).Result;
        Back();
        Task.Run(() => 
            Singleton.Localdb.Query("DROP TABLE GAMEDATA",
                $"Save{Singleton.Instance.LoadNumber}.sqlite3")).Wait();
        File.Delete(Application.persistentDataPath + $"/Save{Singleton.Instance.LoadNumber}.sqlite3");
        File.Delete(Application.persistentDataPath + "/continue.txt");

    }
    public void ContinueButton()
    {
        if (Singleton.Instance.Loggedin)
        {
            Destroy(loginPanel);
           Upload();
        }
        else Destroy(mainPanel);
        }
    

    void Back()
    {
        Singleton.Instance.init();
        Singleton.LoadScreenclass.LoadScreen(true, false, 1, false, true,false);
    }
}
