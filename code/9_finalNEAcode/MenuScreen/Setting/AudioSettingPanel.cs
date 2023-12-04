using UnityEngine;

namespace MenuScreen.panels
{
    public class AudioSettingPanel : MenuPanels
    {
        void Start()
        {
            _menu = gameObject;
            ShowHide(false);
        }
    }
}