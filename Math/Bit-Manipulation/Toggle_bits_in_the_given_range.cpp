class Solution {
  public:
    int toggleBits(int n , int l , int r) {
        vector<int>b;
        while(n > 0)
        {
            if(n % 2 == 0)
            {
                b.push_back(0);
            }
            else
            {
                b.push_back(1);
            }
            n = n/2;
        }
        
        for(int i=l;i < r+1;i++)
        {
            if(b[i] == 0)
            {
                b[i] =1;
            }
            else
            {
                b[i] = 0;
            }
        }
        
        int ans = 0;
        for(int i=0;i<b.size();i++)
        {
            ans += b[i] * pow(2,i);
        }
        return ans;
        
        
    }
};

