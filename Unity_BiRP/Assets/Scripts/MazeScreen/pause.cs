using UnityEngine;

public class pause : MenuPanels
{
    private LeaderBoarddata leader;
    private void Awake()
    {
        _menu = gameObject;
        leader = FindObjectOfType<LeaderBoarddata>();
    }

    public override void Start()
    {
        
        base.Start();
    }

    public void timeChange(float time)
    {
        Time.timeScale = time;
    }

    public void Open()
    {
        timeChange(0);
        ShowHide(true);
    }

    public void Close()
    {
        timeChange(1);
        ShowHide(false);
    }
    public void SettingPause()
    {
        FindObjectOfType<MazeManager>().Setting1.gameObject.SetActive(true);
    }

    public void LeaderboardPause()
    {
       leader.ShowHide(true);
    }

    public void Back()
    {
        FindObjectOfType<MazeManager>().Back();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
