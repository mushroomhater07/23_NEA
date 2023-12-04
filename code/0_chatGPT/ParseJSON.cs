using System;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class Item
{
    public GameObject obj;
    public string itemName;
    public string itemDescription;
}

public class JSONParser : MonoBehaviour
{
    public TextAsset jsonFile;
    public List<Item> items;

    void Start()
    {
        string jsonString = jsonFile.text;
        items = ParseJSON(jsonString);
    }

    private List<Item> ParseJSON(string jsonString)
    {
        List<Item> items = new List<Item>();

        JSONObject json = new JSONObject(jsonString);
        foreach (JSONObject itemObject in json.list)
        {
            Item item = new Item();
            item.obj = (GameObject)Resources.Load(itemObject.GetField("obj").str);
            item.itemName = itemObject.GetField("itemName").str;
            item.itemDescription = itemObject.GetField("itemDescription").str;

            items.Add(item);
        }
        return items;
    }
}
//baby

public class JSONParser : MonoBehaviour
{
    public TextAsset jsonFile;
    public List<Item> items;

    void Start()
    {
        string jsonString = jsonFile.text;
        items = JsonUtility.FromJson<List<Item>>(jsonString);
    }
}