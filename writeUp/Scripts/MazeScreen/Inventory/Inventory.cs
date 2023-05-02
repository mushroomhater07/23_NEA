using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class Inventory : MenuPanels
{
    public struct InventoyItem {
        public item itemDetail;
        public int quantity;
    }
    
    private InventoyItem[] inventoryItems;
    [SerializeField] private Slot SlotUI;
    private int maxsize;

    public InventoyItem[] InventoryItems
    {
        get => inventoryItems;
        set => inventoryItems = value;
    }

    public override void Start() { }
    public void Setup(int size)
    {
        maxsize = size;
        GameObject slotsParent = GameObject.Find("InventorySlots");
        for (int i = 0; i < size; i++)
        {
            Slot tempslot = Instantiate(SlotUI, slotsParent.transform);
            if(i < 2)
            {
                tempslot.frame.color = Color.cyan;
                tempslot.mainSlot = true;
            }
            tempslot.gameObject.name = $"SlotN{i}";
            tempslot.stacksizeUI.color = Color.yellow;
            tempslot.stacksizeUI.text = "x0";
        }
        ShowHide(false);
    }
    void pickupitem(item itemdetail)
    {
        int itemSlotLoc;
        bool stack = false;                                                                                                                                                                                             
        InventoyItem item = new InventoyItem();
        foreach (var VARIABLE in inventoryItems) {
            if(VARIABLE.itemDetail == itemdetail)
            {
                stack = true;
                item = VARIABLE;
            }
        }

        if (stack)
        {
            if (item.quantity >= itemdetail.maxStack)
            {
                
            }
            else
            {
                //input
            }
        }
        else
        {
            if (inventoryItems.Length >= maxsize)
            {
                //reject
            }else
            {
             //input
            }
        }
        
        
    }
    void removeitem(string s, int quantity){
        for (int i = 0; i < inventoryItems.Length; i++)
        {
            // if(jerk[i].object1.name)
        }
    }
    
    
}