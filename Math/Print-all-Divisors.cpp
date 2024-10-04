int* printDivisors(int n, int &size){

    int *divisor = new int[n];
    int ind = 0;

    for(int i=1;i<=n/2;i++)
    {
        if(n % i == 0)
        {
            divisor[ind] = i;
            ind++;
        }
    }
    divisor[ind++] = n;

    size = ind;
    return divisor;

}

/* 
//optimised code 
#include <bits/stdc++.h>
using namespace std;

vector<int>printDivisors(int n)
{
    vector<int>ans;
    int squ = sqrt(n);
    for(int i=1;i<=squ;i++)
    {
        if(n % i == 0)
        {
            ans.push_back(i);
        }
        if(n/i != i)
        {
            ans.push_back(n / i);
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}
int main() {
   int n;
   cin>>n;
   
   vector<int>ans =printDivisors(n);
   
   for(int i=0;i<ans.size();i++)
   {
       cout<<ans[i]<<" ";
   }

    return 0;
}*/