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
    }
}