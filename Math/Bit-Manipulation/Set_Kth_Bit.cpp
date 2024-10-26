
//Optimal Solution
int setKthBit(int N, int K)
    {
        return (N |(1 << K));
    }
/*
brute force
int setKthBit(int N, int K)
    {
        string res = "";
        while(N > 0)
        {
            if(N % 2 == 0)
            {
                res += "0";
            }
            else
            {
                res += "1";
            }
            N = N/2;
        }
        
        if(res[K] == '0')
        {
            res[K] = '1';
        }
    
        int ans = 0;
        for(int i=0;i<res.size();i++)
        {
            ans += (res[i] -'0') * pow(2,i);
        }
         return ans;
}*/
    
    




