class Solution {
  public:
    vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
        int n = matrix.size();
        int m = matrix[0].size();
        map<int,vector<int>>mp;
        vector<int>res;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                mp[i+j].push_back(matrix[i][j]);
            }
        }
        
        for(auto &it:mp)
        {
            for(int i:it.second)
            {
                res.push_back(i);
            }
        }
        return res;
    }
};

