// using System.Collections;
// using System.Collections.Generic;
// using UnityEngine;
// using Mono.Data.Sqlite;
// using System.Data;
// using System.Threading.Tasks;
//
public class localSqlite
{
//     //"URI=file:" + Application.persistentDataPath + "/" + "data.db";
//     //"URI=file:" + Application.dataPath + "\\StreamingAssets" + "/"+ DataBaseName; //editor
//
//     public async Task<string> Query(string sql, string dbname = "game")
//     {
//         string outputdata = "";
//         var connection = "URI=file:" + Application.persistentDataPath + "/" + "data.db";
//         // IDbConnection dbcon = new SqliteConnection(connection);
//         IDbCommand dbcmd;
//         IDataReader reader;
//         dbcon.Open();
//         dbcmd = dbcon.CreateCommand();
//         dbcmd.CommandText = sql;
//         reader = dbcmd.ExecuteReader();
//         while (reader.Read()){
//             int count = 0;
//             try{
//                 while(true){
//                     outputdata += reader.GetValue(count);
//                     outputdata += ",";
//                     count++;
//                 }
//             }catch
//             {
//                 outputdata += ";";
//             }
//         }
//         reader.Close();reader = null;
//         dbcmd.Dispose();dbcmd = null;
//         dbcon.Close();dbcon = null;
//         return outputdata;
//     }
//     // Query("CREATE TABLE IF NOT EXISTS GAMEDATA ('id' int(10), 'username' varchar(16),'score' int(5));");
//         // Query("INSERT INTO GAMEDATA(id, username, score) VALUES (2, 'hey1', 233);");
//         // Query("SELECT * FROM GAMEDATA ");
}
