using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
public class webrequest : MonoBehaviour
{
    // Start is called before the first frame update
    InputField outputArea;
    string text1 = "hi";
    string text2 = "bye";
    
    private void Start()
    {
        Debug.Log(StartCoroutine(WebRequest()));
    }
    IEnumerator WebRequest()
    {   
        WWWForm form = new WWWForm();
        form.AddField("username", text1);
        form.AddField("password", text2);


        UnityWebRequest www = UnityWebRequest.Post("http://localhost/sqlconnect/test.php", form);
        yield return www.SendWebRequest();
        
    }
 //registerButton.interactable = (usernameField.text.Length >= 0 && passwordField.text.Length >= 8);
}
