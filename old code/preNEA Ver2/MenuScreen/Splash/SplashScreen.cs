using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace MenuScreen
{
    public class SplashScreen : MonoBehaviour
    {
        private bool allowChange = false;
        private void Start()
        {
            Singleton.LoadScreenclass.LoadScreen(true,true,SceneManager.GetActiveScene().buildIndex+1);
        }

        private void Update() {
            if (Singleton.LoadScreenclass.loadComplete) {
                if(Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
                Singleton.LoadScreenclass.loadScene.allowSceneActivation = true;
            }
        }
    }
}