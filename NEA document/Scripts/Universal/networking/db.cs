using System;
using UnityEngine;
using Mono.Data.Sqlite;
using System.Data;
using System.IO;
using System.Threading.Tasks;
using Unity.VisualScripting;

public class localSqlite
{
    //"URI=file:" + Application.persistentDataPath + "/" + "data.db";
    //"URI=file:" + Application.dataPath + "\\StreamingAssets" + "/"+ DataBaseName; //editor
    private string datapath;
    public void init()
    {
        datapath = $"{Application.persistentDataPath}";
    }

    public async Task<string> Query(string sql, string dbname = "game")
    {

        
        string outputdata = "";
        //Application.persistant must run in main thread
        var connection =$"URI=file:{datapath}/{dbname}";
        // Debug.Log(connection);
        if(!File.Exists(connection.Substring(9)))
            Task.Run(() => { WhenFileCreated(connection.Substring(9)); }).Wait();
        try
        {
            IDbConnection dbcon = new SqliteConnection(connection);
            IDbCommand dbcmd;
            IDataReader reader;
            dbcon.Open();
            dbcmd = dbcon.CreateCommand();
            dbcmd.CommandText = sql;
            reader = dbcmd.ExecuteReader();
            while (reader.Read())
            {
                int count = 0;
                try
                {
                    while (true)
                    {
                        outputdata += reader.GetValue(count);
                        outputdata += ";";
                        count++;
                    }
                }
                catch
                {
                    outputdata += ";";
                }
            }

            reader.Close();
            reader = null;
            dbcmd.Dispose();
            dbcmd = null;
            dbcon.Close();
            dbcon = null;
            return outputdata;
        }
        catch (Exception e)
        {
            Debug.Log(sql);
            Debug.Log(e);
            Debug.Log(connection);
            return e.ToString();
        }
    }
    public async Task WhenFileCreated(string path)
    {
        if (File.Exists(path)) return;
            // return Task.FromResult(true);

        var tcs = new TaskCompletionSource<bool>();
        FileSystemWatcher watcher = new FileSystemWatcher(Path.GetDirectoryName(path));

        FileSystemEventHandler createdHandler = null;
        RenamedEventHandler renamedHandler = null;
        createdHandler = (s, e) =>
        {
            if (e.Name == Path.GetFileName(path))
            {
                tcs.TrySetResult(true);
                watcher.Created -= createdHandler;
                watcher.Dispose();
            }
        };

        renamedHandler = (s, e) =>
        {
            if (e.Name == Path.GetFileName(path))
            {
                tcs.TrySetResult(true);
                watcher.Renamed -= renamedHandler;
                watcher.Dispose();
            }
        };

        watcher.Created += createdHandler;
        watcher.Renamed += renamedHandler;

        watcher.EnableRaisingEvents = true;
    return;
    }
}
