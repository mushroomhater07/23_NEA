using System;
using System.Collections.Generic;
using System.IO;
using System.Threading.Tasks;
using MenuScreen.panels;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Random = UnityEngine.Random;

namespace MenuScreen
{
    public class MainMenuManager : MonoBehaviour
    {
        private bool _manSfXplay;
        private Animator _manAnimator;
        [SerializeField] private Image fade;

        [SerializeField]private GameObject _continuePanel;
        
        [Header("Audio")] 
        [SerializeField] private List<AudioClip> menubuttonSfx;
        [SerializeField] private AudioClip[] manSfx;
        [SerializeField] private AudioClip quitButtonSfx;

        [Header("Button")] [SerializeField] private GameObject menuButtons;
        private Button[] _menuSelectorButton;
        private SettingManager _settingManager;
        private QuitMenuPanel _quitMenuPanel;
        private LeaderBoarddata _leaderboardPanel;
        private SlotSelectionPanel _slotSelectionPanel;
        private GameObject[] panels;
        
        private loginState _loginState;
        private int continueFrom;
        [SerializeField]private TMP_Text loginstate;
            [SerializeField] private Button continueButt;

       public Button ContinueButt
       {
           get => continueButt;
           set => continueButt = value;
       }

       void Awake()
        {
            menuButtons = GameObject.Find("MenuSelector").gameObject;
            fade = GameObject.Find("FadeOutImage").GetComponent<Image>();
            Singleton.Fade.FadeOut(fade);
            _manAnimator = GameObject.Find("casual_male_unshaded").GetComponentInChildren<Animator>();

            _settingManager = FindObjectOfType<SettingManager>();
            _quitMenuPanel = FindObjectOfType<QuitMenuPanel>();
            _leaderboardPanel = FindObjectOfType<LeaderBoarddata>();
            _slotSelectionPanel = FindObjectOfType<SlotSelectionPanel>();
            _loginState = FindObjectOfType<loginState>();
            
            panels = new[]
            {
                _loginState.gameObject, _slotSelectionPanel.gameObject, _leaderboardPanel.gameObject,
                _settingManager.gameObject, _quitMenuPanel.gameObject
            };
            
            _menuSelectorButton = menuButtons.GetComponentsInChildren<Button>();
            foreach (Button button in _menuSelectorButton){
                button.onClick.AddListener(PlaySound);
            }
            for (int i = 0; i < _menuSelectorButton.Length; i++)
            {
                int dummyi = i;
                _menuSelectorButton[i].onClick.AddListener(() => menuSelectionButtonAction(dummyi));
            }

            string path = Application.persistentDataPath + "/continue.txt";
            if (File.Exists(path))
            {
                StreamReader writer = new StreamReader(path);
                string text = Task.Run(() =>writer.ReadToEndAsync()).Result;
                // Debug.Log(text.Length);Debug.Log(int.Parse(text));
                if (text.Length > 0)
                {
                    continueButt.interactable = true;
                    continueFrom = int.Parse(text);
                }
            }

            if (!Singleton.Instance.ContinuePrompt)
            {
                _continuePanel.SetActive(false);
            }
            Singleton.Instance.ShowDetail("Login","Remember login to Save progress \n Inside: Setting > Login");
            
        }

       public void continuePrompt()
       {
           Singleton.Instance.ContinuePrompt = false;
           Destroy(GameObject.Find("ContinuePanel").gameObject);
           Singleton.Instance.ContinuePrompt = false;
       }
        private void menuSelectionButtonAction(int selection)
        {
            panels[selection].SetActive(true);
            if (selection == 2)
            {
                Singleton.Instance.ShowDetail("Data","click on the column header to show data \n All data and stat in the left panel");

            }
        }
        
        void Update(){
            if(_manAnimator.IsInTransition(0) && _manSfXplay){
                Singleton.AudioPlayer.PlaySfx(manSfx[Random.Range(0,manSfx.Length)]);
                _manSfXplay = false;
            }

            if (Singleton.Instance.username.Length > 0)
                loginstate.text = Singleton.Instance.username;
                else loginstate.text = "Please Login";
        }
        void PlaySound(){
            int num = Random.Range(0,menubuttonSfx.Count);
            Debug.Log(menubuttonSfx[num]);
            Singleton.AudioPlayer.PlaySfx(menubuttonSfx[num]);
        }
        //public
        public void Move(){
            _manAnimator.SetTrigger("exit");
            _manSfXplay = true;
        }
        public void ShowQuit(bool show){
            // _quitpanel.ShowHide(show);
            if(show){
                Singleton.AudioPlayer.PlaySfx(quitButtonSfx);
            }
        }

        public void ContinueButton() => _slotSelectionPanel.SavefileSelector(continueFrom);

        
    }
}