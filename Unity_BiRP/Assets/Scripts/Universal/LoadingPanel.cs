using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

namespace Universal
{
    public class LoadingPanel : MenuPanels
    {
        [SerializeField] private TMP_Text progressbartxt, touchContinue, Title;
        [SerializeField] private GameObject loadingCircle, progressbarObj,firstTime, TouchButton;
        [SerializeField] private Slider progressbar;
        public AsyncOperation loadScene;
        // [HideInInspector]
        public bool loadComplete, showprogressbar, showprogressbartext;
        [SerializeField] private List<string> wordlist;
        private int currentTitle = 0;
        private float timePeriod= 0 ;

        private void OnEnable()
        {
            timePeriod = 0;
        }

        public void LoadScreen (bool load, bool splash, int index = 0, bool withBar = false, bool withBarText = false, bool withTitle = false)
        {
            loadComplete = false;
            if (splash) firstTime.SetActive(true);else firstTime.SetActive(false);
            if (withTitle) Title.enabled = true;else Title.enabled = false;
            if (load) {
              
                loadScene = SceneManager.LoadSceneAsync(index);  loadScene.allowSceneActivation = false;
                if (withBar) {showprogressbar = true;
                    progressbarObj.SetActive(true);
                }else {showprogressbar = false;
                    progressbarObj.SetActive(false);
                }
                if (withBarText) {
                    showprogressbartext = true;
                    progressbartxt.enabled = true;
                }else {
                    showprogressbartext = false;
                    progressbartxt.enabled = false;
                }
            }
            loadingCircle.SetActive(true);
            gameObject.SetActive(true);
            // Debug.Log("error");
        }

        public void Update()
        {
            timePeriod += Time.deltaTime;
            if (timePeriod > 3f)
            {
                currentTitle = (currentTitle + 1) % (wordlist.Count);
                Title.text = wordlist[currentTitle];
                timePeriod = 0;
            }
            
            // Debug.Log(loadComplete);
            if (showprogressbar) { progressbar.value = loadScene.progress; }
            if (showprogressbartext) { progressbartxt.text = (loadScene.progress * 100).ToString(); }
            if (loadScene.progress < 0.5f) { progressbartxt.color = Color.white; }
            else { progressbartxt.color = Color.black;
                if (loadScene.progress >= 0.9f) {
                    progressbartxt.text = "Load Completed";
                    loadComplete = true;
                }
            }
            if (loadComplete) { loadingCircle.SetActive(false);
                touchContinue.enabled = true;
                TouchButton.GetComponent<Button>().onClick.AddListener(ChangeScene);
            }
        }
        private void ChangeScene()
        {
            loadScene.allowSceneActivation = true;
            TouchButton.GetComponent<Button>().onClick.RemoveAllListeners();
        }
        public override void Start()
        {
            ShowHide(true);
        }
        //     IEnumerator SlowChangeScene(int index)
        //     {
        //         yield return null;
        //         loadpanel.SetActive(true);
        //         //Begin to load the Scene you specify
        //         AsyncOperation loading = SceneManager.LoadSceneAsync(index);
        //         //Don't let the Scene activate until you allow it to
        //         loading.allowSceneActivation = false;
        //         //When the load is still in progress, output the Text and progress bar
        //         while (!loading.isDone)
        //         {
        //             slider.value = loading.progress;
        //             progresstxt.color = Color.black;
        //             progresstxt.SetText((slider.value * 100).ToString() + "%");            
        //             if (loading.progress >= 0.9f)
        //             {
        //                 slider.value = 1;
        //                 //Change the Text to show the Scene is ready
        //                 progresstxt.SetText((slider.value * 100).ToString() + "%");
        //                 loadingtxt.fontSize = 16;
        //                 loadingtxt.SetText("Press anywhere to continue");
        //                 //Wait to you press the space key to activate the Scene
        //                 if (Input.anyKeyDown)
        //                     //Activate the Scene
        //                     loading.allowSceneActivation = true;
        //             }
        //
        //             yield return null;
        //         }
        // }
    }
}