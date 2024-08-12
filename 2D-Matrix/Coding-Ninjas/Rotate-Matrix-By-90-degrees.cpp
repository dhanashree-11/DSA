#include <bits/stdc++.h> 
vector<vector<int>> rotateMatrix(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>i;j--)
        {
            swap(matrix[j][i],matrix[i][j]);
        }
    }
    return matrix;
}