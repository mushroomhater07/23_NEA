using System.Collections.Generic;
using UnityEngine;
using System;
using System.Threading.Tasks;
using Newtonsoft.Json;
using Unity.VisualScripting;
using UnityEngine.UI;


public class LeaderBoarddata : MenuPanels
{
    private Transform slot;

    public void external(bool allStat)
    {
        if(allStat)Application.OpenURL("");
        else Application.OpenURL("");
    }
    public override void Start()
    {
        slot = GameObject.Find("LeaderboardDataSlot").transform;
        Button[] buttons = GameObject.Find("Title").GetComponentsInChildren<Button>();
        for (int i = 0; i < buttons.Length; i++)
        {
            int dummyi = i;
            buttons[i].onClick.AddListener(delegate { Sorting(dummyi); });
            // Debug.Log(buttons[i]);
        }
        base.Start();
    }

    public void Sorting(int index)
    {
        MergeSortAlgo merge = new MergeSortAlgo();
        printData(merge.MergeSort(GetData().ToArray(), index));
    }
    private List<Leaderboard> ParseJSON(string value)
    {
        Debug.Log(value);
        List<Leaderboard> alist = new List<Leaderboard>();
        List<string> stringList = new List<string>();
        value = value.Replace(" ", "");
        int startIndex = 0, index = 0;
        while (index != -1)
        {
            index = value.IndexOf(';', startIndex);
            if (index == -1)
            {
                // stringList.Add(value[startIndex..]);
                break;
            }

            stringList.Add(value.Substring(startIndex, index - startIndex));
            startIndex = index + 1;
        }

        stringList.ToArray();
        // Debug.Log(JsonConvert.SerializeObject(stringList));
        List<string[]> jsonArray = new List<string[]>();
        for (int i = 0; i < stringList.Count; i++)
        {
            string[] temp = stringList[i].Split(',');
            jsonArray.Add(temp);
            alist.Add(new Leaderboard());
            alist[i].Username = jsonArray[i][0];
            alist[i].Level = int.Parse(jsonArray[i][1]);
            alist[i].Score = int.Parse(jsonArray[i][2]);
            alist[i].Since = int.Parse(jsonArray[i][3]);
        }

        return alist;
    }

    public void WebLeader(int index)
    {
        string[] website = { "pivot", "cross" };
        Application.OpenURL($"http://localhost:3000/{website[index]}");
    }


    public List<Leaderboard> GetData()
    {
        foreach (var VARIABLE in FindObjectsOfType<leaderslot>())
        {
            Destroy(VARIABLE.gameObject);
        }
        return ParseJSON(Task.Run(() =>
            Singleton.CsharpAPI.GetData(true, $"SELECT pl.username,p.levelID, p.score, p.time FROM Progress p INNER JOIN Player pl ON p.playerID = pl.playerID", "")).Result);
    }

    public void printData(Leaderboard[] result)
    {
        for (int i = 0; i < result.Length; i++)
        {
            var local = Instantiate(Resources.Load("UI/LeaderButton"), slot);
            var localscript = local.GetComponent<leaderslot>();
            localscript.User.text = result[i].Username;
            localscript.Level.text = result[i].Level.ToString();
            localscript.Score.text = result[i].Score.ToString();
            localscript.Since.text = result[i].Since.ToString();
        }
    }
}










[Serializable]  
    public class Leaderboard{
        public string Username { get; set; }
        public int Level { get; set; }
        public int Score { get; set; }
        public int Since { get; set; }
    }


// GameObject game = transform.GetChild (0).gameObject;
// GameObject g;
//     for(int i = 0; i < 5; i++){
//     g = Instantiate (game, transform);
//     g.transform.GetChild(1).GetComponent<Text>().text = "i";
//
// }
// Destroy(game);
