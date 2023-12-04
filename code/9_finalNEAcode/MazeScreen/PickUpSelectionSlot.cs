using UnityEngine;

namespace MazeScreen.movement
{
    public class PickUpSelectionSlot : MenuPanels
    {
        public override void Start()
        {
            ShowHide(true);
        }

        public void Toggle()
        {
            if (_menu) ShowHide(false);
            else ShowHide(true);
        }
    }
}