using TMPro;
using UnityEngine;
using UnityEngine.UI;

    public class PopupPanel : MenuPanels
    {
        [SerializeField] private Sprite Error;
        [SerializeField] TMP_Text itemName, itemDescription;
        [SerializeField] Image _itemImage;

        public override void Start()
        {
            ShowHide(true);
        }

        public void ShowDetail(string name, string description, Sprite itemImage)
        {
            if(itemImage != null)_itemImage.overrideSprite = itemImage;
            itemName.text = name;
            itemDescription.text = description;
            
        }

        public void ShowError(string detail)
        {
            _itemImage.overrideSprite = Error;
            itemName.text = "ERROR";
            itemDescription.text = detail;
        }
        
    }
