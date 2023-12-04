using System;
using System.Collections;
using System.Collections.Generic;
using MazeScreen.movement;
using UnityEngine;
using UnityEngine.UI;

public class PickUp : MenuPanels
{
    public List<item> items;
    private PickUpSelectionSlot _selectionSlot;
    public override void Start()
    {
       
        _selectionSlot = GetComponent<PickUpSelectionSlot>();
        Button toggler = GameObject.Find("PickUpToggle").GetComponent<Button>();
        toggler.onClick.AddListener(Toggle);
        base.Start();
    }

    
    public void Update()
    {
        if (items.Count != 0)
            ShowHide(true);else
            ShowHide(false);
        
        
    }
    

    public void Toggle()
    {
        _selectionSlot.Toggle();
    }    
}


