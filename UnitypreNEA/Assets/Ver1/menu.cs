using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface Menu{
}
public abstract class MenuSetting{
    private GameObject _menu;
    public virtual void Hide(){Debug.Log("_menu.SetActive(false)");}
    public virtual void Show(){Debug.Log("_menu.SetActive(true)");}
}
