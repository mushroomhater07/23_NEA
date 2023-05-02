using System;
using System.IO;
using System.Threading.Tasks;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
public class loginState : MenuPanels
{
    [Header("welcomeBack")]
    [SerializeField] private Button logbut;
    [SerializeField] private TMP_InputField usernameField, PasswordField;
    [SerializeField] private TMP_Text info;
    [SerializeField] private GameObject welcomebackPanel;

    [Header("login")] [SerializeField]private GameObject loginPanel;
    [SerializeField] private Button notMeButton, playButton;
    [SerializeField]private TMP_Text getusername;

    private string user;
    private int ID;
    string path => Application.persistentDataPath + "/login.bin";
    public override void Start()
    { }

    public void OnEnable()
    {
        
        Singleton.Instance.init();
        if (File.Exists(path))
        {
            var stream = File.OpenRead(path);
            BinaryReader br = new BinaryReader(stream);
            try{ID = br.ReadInt32();
            user = br.ReadString();}catch{}
            br.Close();
            try{if (user.Length != 0)
            {
               welcomeBack();
            }}catch{welcomebackPanel.SetActive(false);
                loginPanel.SetActive(true);
                infoHandler(false);}
        }
        else
        {
            welcomebackPanel.SetActive(false);
            loginPanel.SetActive(true);
            infoHandler(false);
        }
    }
    void welcomeBack()
    {
        welcomebackPanel.SetActive(true);
        Singleton.Instance.username = this.user;
        Singleton.Instance.playerID = this.ID;
        getusername.text = Singleton.Instance.username;
        loginPanel.SetActive(false);
    }
    public void Play()
    {
        welcomebackPanel.SetActive(false);
        loginPanel.SetActive(false);
        this.ShowHide(false);
    }
    public void NotYou()
    {
        File.Delete(path);
        Singleton.Instance.username = "";
        Singleton.Instance.playerID = 0;
        loginPanel.SetActive(true);
        welcomebackPanel.SetActive(false);
    }
    public void Register()
    {
        Application.OpenURL("https://maze.just4fun.tk/register");
    }
    public void Login()
    {
        FileStream stream = new FileStream(path, FileMode.Create);
        BinaryWriter writer = new BinaryWriter(stream);
        if (PasswordField.text.Length < 8 || usernameField.text.Length == 0)
        {
            infoHandler(true, "password length must be longer than 8 characters");
            return;
        }
        var result = Task.Run(() => Singleton.CsharpAPI.GetData(true, 
            "SELECT hash, salt, playerID, username FROM Player WHERE email = ?",
            usernameField.text)).Result.Split(",");
        try
        {
        if(Math.Floor(hexadeciamToDenary(result[0])/100000000f)== Math.Floor(hashFunction(PasswordField.text, int.Parse(result[1]))/100000000f))
        {var playerID = int.Parse(result[2]);
            var username = result[3];
            writer.Write(playerID);
            writer.Write(username);
            Singleton.Instance.username = username;
            Singleton.Instance.playerID = playerID;
            infoHandler(true,"Logged in, please close this window");
            Singleton.Instance.Loggedin = true;
        } else
        {
            infoHandler(true,"Wrong password");
        } }
        catch
        {
            infoHandler(true, JsonConvert.SerializeObject(result));
        }
        writer.Close(); stream.Close();
    }

    void infoHandler(bool enable, string text ="")
    {
        info.text = text;
        info.enabled = enable;
    }
    float hashFunction(string password, float salt)
    {
        float hash = 0, count = 10;
        for (int i = 0; i < password.Length; i++) {
                char c = password[i];
                hash += (float)(c * Math.Pow(10, count - i) + salt);
        }
        return hash;
    }

    // public float DecToHex(float hash)
    // {
    //     return (int)(hash / 16) + ((hash / 16) - (int)(hash / 16)) * 16;
    // }
    public float hexadeciamToDenary(string hexa)
    {
        float tempnum = 0, count = 0;
        for (int i = 0; i < hexa.Length; i++)
        {
            switch (hexa[i])
            {
                case '0':case '1':case '2':case '3':case '4':
                case '5':case '6':case '7':case '8':case '9':
                    tempnum = hexa[i]-48;
                    break;
                case 'a':
                    tempnum = 10;
                    break;
                case 'b':
                    tempnum = 11;
                    break;
                case 'c':
                    tempnum = 12;
                    break;
                case 'd':
                    tempnum = 13;
                    break;
                case 'e':
                    tempnum = 14;
                    break;
                case 'f':
                    tempnum = 15;
                    break;
            }
            count +=(tempnum * Mathf.Pow(16, hexa.Length-i-1));
        }return count;
    }
    
}
