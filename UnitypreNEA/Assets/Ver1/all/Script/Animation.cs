using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Animation : MonoBehaviour
{
    private bool play;
    private Animator _animator;
    [SerializeField] private AudioClip[] clips;
    void Start(){
        _animator = this.GetComponentInChildren<Animator>();
    }
    public void Move(){
        
        _animator.SetTrigger("exit");
        play = true;
    }
    void Update(){
        if(_animator.IsInTransition(0) && play == true){
            Singleton.Instance.PlayAudio(clips[(int)Random.Range(0,clips.Length)]);
            play = false;
        }
    }

}
