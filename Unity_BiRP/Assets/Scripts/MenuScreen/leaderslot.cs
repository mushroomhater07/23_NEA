using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
public class leaderslot : MonoBehaviour
{
    [SerializeField] private TMP_Text user, level, score, since;

    public TMP_Text User
    {
        get => user;
        set => user = value;
    }

    public TMP_Text Level
    {
        get => level;
        set => level = value;
    }

    public TMP_Text Score
    {
        get => score;
        set => score = value;
    }

    public TMP_Text Since
    {
        get => since;
        set => since = value;
    }
}
