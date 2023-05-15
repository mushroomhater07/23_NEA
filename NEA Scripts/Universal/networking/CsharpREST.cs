using System;
using System.Collections.Generic;
using System.Net.Http;
using System.Threading.Tasks;


public class CSharpREST
{
    public async Task<string> GetData(bool postdata, string sql, string argument ) {
        try
        {
            HttpClient client = new HttpClient();
            HttpResponseMessage response;
            if(postdata)
            {
                var values = new Dictionary<string, string>
                {  
                    { "sql", sql },
                    { "args", argument},
                };
                response = await client.PostAsync(new Uri("https://unity.just4fun.tk"), new FormUrlEncodedContent(values));
            }
            else response = await client.GetAsync("https://unity.just4fun.tk/date.php");
            response.EnsureSuccessStatusCode();
            var responseBody = await response.Content.ReadAsStringAsync();
            return responseBody;
        }catch (HttpRequestException e){ return "404";}
    }
}
// PostAsync(String, HttpContent) 
// var result = await client.SendAsync(new HttpRequestMessage(HttpMethod.Head, url));
// client.DefaultRequestHeaders.Add("User-Agent", "C# program");
// var msg = new HttpRequestMessage(HttpMethod.Get, url);
// var builder = new UriBuilder("localhost/unity");
// string responseBody = await client.GetStringAsync(uri);
// builder.Query = "name=John Doe&occupation=gardener";
// var url = builder.ToString();
// Result = await client.SendAsync(msg);
// Debug.Log(response.StatusCode);
// List<object>.Add(new CurrencyDetails(responseBody));
