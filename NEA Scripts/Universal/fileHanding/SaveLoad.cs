using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using UnityEngine;

public class SaveLoad:MonoBehaviour{
    private void Start(){

    }
    private IEnumerator UpdataDataFrequently(string path){
        StreamReader reader = new StreamReader(path);
        while (true){
            string data =reader.ReadLine();
            
        }
    }
    // public void SaveBinary(string path){
    //     // string fullpath = Application.persistentDataPath+ $"/{path}.mr";
    //     string writedata = new itemdata{
    //         //data inside the item class as object
    //         itemName = 
    //     }
    //     BinaryFormatter formatter = new BinaryFormatter();
    //     FileStream fileStream = File.Create(path); //Create ?

    //     formatter.Serialize(fileStream, writedata);
    //     fileStream.Close();
//     // }
//     public void LoadBinary(string path){
//         if (File.Exists(path))
//     {
//         BinaryFormatter binaryFormatter = new BinaryFormatter();
//         FileStream fileStream = File.Open(path, FileMode.Open);

//         playerData = (item)binaryFormatter.Deserialize(fileStream);
//         fileStream.Close();

//         transform.position = playerData.playerPosition;
//         LoadMonsterPositions(playerData.monsterPositions);
//     }
//     }
//     private Queue<Vector3> GetMonsterPositions()
//     {
//         // Get the positions of the monsters in a queue
//         return monsterPositions;
//     }

//     private void LoadMonsterPositions(Queue<Vector3> positions)
//     {
//         // Load the positions of the monsters
//     }
    
// }

    
    // public static List<Game> savedGames = new List<Game>();
    // public static void Save(){
    //     SaveLoad.savedGames.Add(savedGames.current);
    //     string path = "C:\\Users\\document";
    //     using (BinaryWriter writer = new BinaryWriter(File.Open(path, FileMode.Create))){
    //         bw.Write("hello");
    //     }
    // }

    // public static void Load(){
    //     using (BinaryReader reader = new BinaryReader(File.Open(path, FileMode.Open))){
    //         Console.Writeline(reader.ReadString());
    //         SaveLoad.savedGames = (List<Game>)reader.ReadString();
    //     }
    // }
    // string path = @"C:\doc.txt";
    // StreamReader sr = new StreamReader(path);   
    //         
    // sr.ReadLine();
    // sr.Close();
    //
    // StreamWriter sw = new StreamWriter(path);
    // sw.WriteLine("");
    // sw.Close();
    //
    // FileStream fs = new FileStream(path, FileMode.Create);
    // BinaryReader bw = new BinaryReader(fs);
}