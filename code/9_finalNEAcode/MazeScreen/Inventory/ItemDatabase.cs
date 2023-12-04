// using System;
// using System.Collections.Generic;
// using UnityEngine;
// [CreateAssetMenu]
// public class ItemDatabase : ScriptableObject
// {
//     public item[] items;

//     public item Getitem(int index)
//     {
//         return items[index];
//     }
// }
// public class ItemRuntime:MonoBehaviour{
//     private ItemDatabase dbscript;
//     void Start(){
//         ItemDatabase instantiated = Instantiate(dbscript,FindObjectOfType<Singleton>().gameObject.transform);
//         string jsonString = jsonFile.text;
//         items = ParseJSON(jsonString);
//     }
//     public TextAsset jsonFile;
//     // public List<itemdata> items;

//     private List<item> ParseJSON(string jsonString)
//     {
//         // List<Item> items = new List<Item>();

//         // JSONObject json = new JSONObject(jsonString);
//         // foreach (JSONObject itemObject in json.list)
//         // {
//         //     item item = new item();
//         //     item.obj = (GameObject)Resources.Load(itemObject.GetField("obj").str);
//         //     item.itemName = itemObject.GetField("itemName").str;
//         //     item.itemDescription = itemObject.GetField("itemDescription").str;

//         //     items.Add(item);
//         // }

//         string jsonString = jsonFile.text;
//         items = JsonUtility.FromJson<List<item>>(jsonString);

//         return items;
//     }
// }

//         // 