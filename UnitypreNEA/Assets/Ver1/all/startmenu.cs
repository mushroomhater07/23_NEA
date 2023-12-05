using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
using TMPro;
// using Newtonsoft.Json;
using System;
using System.Text;
using System.Linq;


public class startmenu : MonoBehaviour
{
    public TMP_Text date;
    // Start is called before the first frame update
    void Start()
    {
        //StartCoroutine(GetDate());
        
        StartCoroutine(GetLeaderboard());
    }

    // Update is called once per frame
    void Update()
    {
    }

    IEnumerator GetDate()
        {


            UnityWebRequest www1 = UnityWebRequest.Get("http://localhost/sqlconnect/Unity/login.php");
            yield return www1.SendWebRequest();

            if (www1.isNetworkError || www1.isHttpError)
            {
                Debug.Log(www1.error);
            }
            else
            {
                date.text = www1.downloadHandler.text;
            }
        }

IEnumerator AddRecord(){
    yield return UnityWebRequest.Get("http://localhost/sqlconnect");
}
IEnumerator Register(){
    WWWForm form = new WWWForm();
    yield return form;

    //form.Addfoeld
}
//sttreamreader writeer
   [Serializable]
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
public List<Leaderboard> alist = new List<Leaderboard>();
    IEnumerator GetLeaderboard(){
        UnityWebRequest www1 = UnityWebRequest.Get("http://localhost/sqlconnect/Unity/getleader.php");
        yield return www1.SendWebRequest();
        //Debug.Log(www1.downloadHandler.text);
        
        // var myobjList = JsonConvert.DeserializeObject<List<Leaderboard>>(www1.downloadHandler.text);
        // alist = myobjList;

    // Debug.Log(alist[0].username);

    }
}
