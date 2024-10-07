void toBinary(int N)
{
    string res = "";
    
    while(N > 0)
    {
        if(N % 2 == 1)
        {
            res += "1";
        }
        else
        {
            res = res +  "0" ;
        }
        N = N/2;
    }
    reverse(res.begin(),res.end());
    cout << res;
}