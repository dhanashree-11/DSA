#include <bits/stdc++.h> 
#include <iostream>

using namespace std;

int countBits(int n)
{
     int count =0;
    string res = "";
    while(n > 0)
    {
        if(n % 2 == 0)
        {
            res+= "0";
        }
        else{
            res+= "1";
            count++;
        }
        n = n/2;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout<<countBits(n);
    return 0;
}


//https://www.naukri.com/code360/problems/set-bits_1164179