using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
public class loginState : MonoBehaviour
{
    [SerializeField] private Button regbut,logbut, forgbut,guestbut, notMeButton, playButton;
    [SerializeField] private TMP_InputField usernameField, emailField, PasswordField;
    [SerializeField] private TMP_Text userplace, emailplace, info, getusername;
    [SerializeField] private GameObject login, welcomeback;
    
    private bool loggedin;
    private CSharpREST rest = new CSharpREST();
    void Start() {
        // RegisterSubmit.onClick.AddListener(() => {
        //     StartCoroutine(Register());
        // });
        // regbut = GameObject.Find("RegisterButton").GetComponent<Button>();
        // logbut = GameObject.Find("LoginButton").GetComponent<Button>();
        // forgbut = GameObject.Find("ForgetPassButton").GetComponent<Button>();
        // guestbut = GameObject.Find("GuestButton").GetComponent<Button>();
        regbut.onClick.AddListener(Register);logbut.onClick.AddListener(LoginAction);
        forgbut.onClick.AddListener(ForgotPassword);guestbut.onClick.AddListener(PlayAsGuest);
        // usernameField = GameObject.Find("usernameField").GetComponent<InputField>();
        // emailField = GameObject.Find("emailField").GetComponent<InputField>();
        // PasswordField = GameObject.Find("passwordField").GetComponent<InputField>();
        // userplace = GameObject.Find("usernameplace").GetComponent<TMP_Text>();
        // emailplace = GameObject.Find("emailplace").GetComponent<TMP_Text>();
        // info = GameObject.Find("LoginInfo").GetComponent<TMP_Text>();
    }
    public void LoginAction() {
        if (usernameField.IsActive()) {
            usernameField.gameObject.SetActive(false);
        }
        else
        {
            
        }
    }
    public void ForgotPassword() {
    }
    public void Register() {
        if(!usernameField.IsActive()) {
            usernameField.gameObject.SetActive(true);
            emailplace.text = "Register Email";
        }
        else
        {
            
            rest.GetData(true, "INSERT INTO players(username)", "");
        }
    }
    public void PlayAsGuest() {
        
    }

    public string CheckLogin()
    {
        if (loggedin) return "username";
        else return "Unavailable";
    }
}
