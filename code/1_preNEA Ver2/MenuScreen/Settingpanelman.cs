using MenuScreen.panels;
using UnityEngine;
using UnityEngine.UI;
public class SettingManager : MonoBehaviour
{
    // Start is called before the first frame update
    private AudioSettingPanel _audioPanel;
    private VideoSettingPanel _videoPanel;
    private GraphicsSettingPanel _graphicPanel;
    private ControlSettingPanel _controlPanel;
    private Button _videoButton, _audioButton, _controlButton;
    void Start()
    {
        _audioPanel = new AudioSettingPanel();
        _videoPanel = new VideoSettingPanel();
        _graphicPanel = new GraphicsSettingPanel();
        _controlPanel = new ControlSettingPanel();
    }
    
    public void VideoButton1(){
        _videoButton.interactable = false;
        _audioButton.interactable = true;
        _controlButton.interactable = true;
        _videoPanel.ShowHide(true);
        _audioPanel.ShowHide(false);
        _controlPanel.ShowHide(false);
    }
    public void AudioButton1(){
        _audioButton.interactable = false;
        _videoButton.interactable = true;
        _controlButton.interactable = true;
        _audioPanel.ShowHide(true);
        _videoPanel.ShowHide(false);
        _controlPanel.ShowHide(false);
    }

    public void ControlButton1()
    {
        _controlButton.interactable = false;
        _videoButton.interactable = true;
        _audioButton.interactable = true;
        _controlPanel.ShowHide(true);
        _audioPanel.ShowHide(false);
        _videoPanel.ShowHide(false);
    }
}
