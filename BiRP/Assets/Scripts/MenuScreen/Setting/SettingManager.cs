using System;
using MenuScreen.panels;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;
public class SettingManager : MenuPanels
{
    // Start is called before the first frame update
    private AudioSettingPanel _audioPanel;
    private VideoSettingPanel _videoPanel;
    private GraphicsSettingPanel _graphicPanel;
    private ControlSettingPanel _controlPanel;
    [SerializeField] private GameObject buttonObject;
    private Button[] buttons;
    [SerializeField]private TMP_Text path;
    
    public override void Start()
    {
        buttons = buttonObject.GetComponentsInChildren<Button>();
        _audioPanel = FindObjectOfType<AudioSettingPanel>();
        _videoPanel = FindObjectOfType<VideoSettingPanel>();
        _graphicPanel = FindObjectOfType<GraphicsSettingPanel>();
        _controlPanel = FindObjectOfType<ControlSettingPanel>();
        
        string[] panelName = new string[5] { "AudioAction", "VideoAction", "GraphicAction", "ControlAction","login"};
        for (int i = 0; i < buttons.Length -1; i++)
        {
            buttons[i].onClick.AddListener((UnityAction)Delegate.CreateDelegate(typeof(UnityAction), this, panelName[i]));
        }
        
        base.Start();path.text = Application.persistentDataPath;
    }

    private void login()
    {
        loginState state = FindObjectOfType<loginState>();
        Debug.Log(state);
        // state.LoginButton();
    }
    private void AudioAction()
    {
        PanelHide();
        _audioPanel.ShowHide(true); //create delegant replacement
        buttons[0].interactable = false;
    }

    private void VideoAction()
    {
        PanelHide();
        _videoPanel.ShowHide(true);
        buttons[1].interactable = false;
    }

    private void GraphicAction()
    {
        PanelHide();
        _graphicPanel.ShowHide(true);
        buttons[2].interactable = false;
    }

    private void ControlAction()
    {
        PanelHide();
        _controlPanel.ShowHide(true);
        buttons[3].interactable = false;
    }
    
    private void PanelHide()
    {
        _graphicPanel.ShowHide(false);
        _videoPanel.ShowHide(false);
        _audioPanel.ShowHide(false);
        _controlPanel.ShowHide(false);
        for (int i = 0; i < buttons.Length; i++)
        {
            buttons[i].interactable = true;
        }
    }

    public void QuitSetting()
    {
        gameObject.SetActive(false);
        GetComponent<Setting>().SaveSetting(); //save file
    }
    
}
