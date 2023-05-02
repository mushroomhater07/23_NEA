using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class UnityREST
{
    //ASP.NET has replaced WCF in .NET3.0
    IEnumerator PostData(){
        WWWForm form = new WWWForm();
        form.AddField("sql","SELECT * FROM Leaderboard WHERE Level = ? AND Username = ?;");
        form.AddField("args","45,hey1");
        using UnityWebRequest request = UnityWebRequest.Post("https://unity.shalevportal.ml", form);
        yield return request.SendWebRequest();
        if(request.isNetworkError || request.isHttpError){
            Debug.Log(request.error);}
        else
        {
            Debug.Log(request.downloadHandler.text);
        }
    }
    IEnumerator GetData(){
        using(UnityWebRequest request = UnityWebRequest.Get("https://unity.shalevportal.ml/date.php")){
            yield return request.SendWebRequest();
            if(request.isNetworkError || request.isHttpError){
                Debug.Log(request.error);
            }else{
                    Debug.Log(request.downloadHandler.text);
            }
        }
    }
}
