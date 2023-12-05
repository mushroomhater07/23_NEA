using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class WebRequest : MonoBehaviour
{   
    // Start is called before the first frame update
    public Text date;
    public InputField user;
    public InputField pass;
    public Button LoginSubmit;
    public Button RegisterSubmit;
    void Start()
    {   
        LoginSubmit.onClick.AddListener(() => {
            StartCoroutine(Login());
        });
        RegisterSubmit.onClick.AddListener(() => {
            StartCoroutine(Register());
        });
    }

    // Update is called once per frame
    void Update()
    {
        StartCoroutine(GetDate());
    }


    IEnumerator Register()
    {
        WWWForm form = new WWWForm();
        form.AddField("username", user.text);
        form.AddField("password", pass.text);

        UnityWebRequest www = UnityWebRequest.Post("http://localhost/sqlconnect/reg.php", form);
        yield return www.SendWebRequest();

        if (www.result != UnityWebRequest.Result.Success)
        {
            Debug.Log(www.error);
        }
        else
        {
            Debug.Log("Form upload complete!");
        }
    }
    IEnumerator Login()
    {
        WWWForm form = new WWWForm();
        form.AddField("username", user.text);
        form.AddField("password", pass.text);

        UnityWebRequest www = UnityWebRequest.Post("http://localhost/sqlconnect/login.php", form);
        yield return www.SendWebRequest();
        
        //if (www.SendWebRequest().text.length == 0){}

    }
    IEnumerator GetDate()
    {


        UnityWebRequest www1 = UnityWebRequest.Get("http://localhost/sqlconnect/date.php");
        yield return www1.Send();

        if (www1.isNetworkError || www1.isHttpError)
        {
            Debug.Log(www1.error);
        }
        else
        {
            date.text = www1.downloadHandler.text;

        }
    }
    
}
