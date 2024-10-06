bool isprime(int num)
    {
        if(num < 2)
        {
            return false;
        }
        for(int i = 2;i*i<=num;i++)
        {
            if(num % i == 0)
            {
                return false;
            }
        }
        return true;
    }
    long long int largestPrimeFactor(int N){
        vector<int>ans;
        for(int i=1;i*i<=N;i++)
        {
            if(N % i == 0)
            {
                if(isprime(i))
                {
                    ans.push_back(i);
                }
                if(N / i !=i && isprime(N / i))
                {
                    ans.push_back(N / i);
                }
            }
        }
        int maxi =0;
        for(int i = 0;i<ans.size();i++)
        {
            maxi = max(maxi,ans[i]);
        }
        return maxi ;
    }