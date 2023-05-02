using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class FirstTimeMan : MonoBehaviour
{
    [SerializeField]private GameObject loader;
    [SerializeField]private Animator _animator;
    // Start is called before the first fram
    void Awake()
    {
        Singleton.Instance.init();
    }

    private void Update()
    {
        AnimatorStateInfo stateInfo = _animator.GetCurrentAnimatorStateInfo(0);
        if (stateInfo.normalizedTime >= 0.818f )//&& !_animator.IsInTransition(0)
        {
            LoadScene();
        }
    }

    public void LoadScene()
    {
        loader.SetActive(true);
        
    }
}
