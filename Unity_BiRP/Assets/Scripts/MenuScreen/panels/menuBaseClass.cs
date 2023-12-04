using UnityEngine;

public class MenuPanels: MonoBehaviour
{
    [HideInInspector]
    public GameObject _menu;

    public void Awake()
    {
        _menu = gameObject;
    }

    public virtual void Start()
    {
        ShowHide(false);
    }

    public void ShowHide(bool show) {
        _menu.SetActive(show);
    }
    public virtual void Function() {
        
    }
}
