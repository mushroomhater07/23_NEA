using System;
using System.Collections.Generic;
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
        private Button[] _menuSelectorButton;
        [SerializeField] private Image fade;
        
        private QuitMenuPanel _quitpanel;
        [Header("Audio")] 
        [SerializeField] private List<AudioClip> menubuttonSfx;
        [SerializeField] private AudioClip[] manSfx;
        [SerializeField] private AudioClip quitButtonSfx;
        void Start(){
            _manAnimator = GameObject.Find("casual_male_unshaded").GetComponentInChildren<Animator>();
            
            _menuSelectorButton = GetComponentsInChildren<Button>();
            foreach (Button button in _menuSelectorButton){
                button.onClick.AddListener(delegate{FadeIn(button.gameObject.GetComponent<Image>());});
                button.onClick.AddListener(PlaySound);
            }
            
            _quitpanel = FindObjectOfType<QuitMenuPanel>();
        }
        void Update(){
            if(_manAnimator.IsInTransition(0) && _manSfXplay){
                Singleton.AudioPlayer.PlaySfx(manSfx[Random.Range(0,manSfx.Length)]);
                _manSfXplay = false;
            }
        }
        void PlaySound(){
            int num = Random.Range(0,menubuttonSfx.Count);
            Singleton.AudioPlayer.PlaySfx(menubuttonSfx[num]);
        }
        void FadeIn(Image img)
        {
            Singleton.Fade.FadeIn(img);
        }
        private void OnEnable()
        {
            Singleton.Fade.FadeOut(fade);
        }

        //public
        public void Move(){
            _manAnimator.SetTrigger("exit");
            _manSfXplay = true;
        }
        public void ShowQuit(bool show){
            _quitpanel.ShowHide(show);
            if(show){
                Singleton.AudioPlayer.PlaySfx(quitButtonSfx);
            }
        }
    }
}