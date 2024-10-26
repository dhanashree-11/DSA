
//Brute Force

bool isKthBitSet(int n, int k)
{
    string res= "";

    while(n > 0)
    {
        if(n % 2 == 0)
        {
            res += "0";
        }
        else{
            res += "1";
        }

        n  = n/2;
    }

    if(res[k-1] == '0')
    {
        return false;
    }
    return true;
}

/*

//Using left Shift Operator
bool isKthBitSet(int n, int k)
{
   return (n &(1<<(k-1))) != 0;
}


//Using Right Shift Operator

bool isKthBitSet(int n, int k)
{
   return ((n >> (k-1))& 1) == 1;
}

*/