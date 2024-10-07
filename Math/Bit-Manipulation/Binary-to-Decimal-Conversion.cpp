//Brute 
int binary_to_decimal(string str) 
{
    int res = 0;
    int N = str.size();
        for(int i=0;i<N;i++)
        {
            res += (str[i] - '0') * pow(2 , N - 1 - i);
        }
    return res;
}

/* 

optimal approach
Time  : O(len)
Space : O(1)

 int binary_to_decimal(string str) {
        int res = 0;
        int N = str.size();
        int power = 1;
        for(int i=N-1;i>=0;i--)
        {
            if(str[i] == '1')
            {
                res += power;
            }
             power = power * 2;
        }
        return res;
    }*/