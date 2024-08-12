class Solution {
  public:
    void diagonalSort(vector<vector<int> >& matrix, int n, int m) {

        map<int,vector<int>>mp;
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                mp[i - j].push_back(matrix[i][j]);
            }
        }
        
        
        for(auto &it:mp)
        {
            if(it.first < 0)
            {
                sort(it.second.rbegin(),it.second.rend());
            }
            else if(it.first > 0)
            {
                sort(it.second.begin(),it.second.end());
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=0;j--)
            {
                matrix[i][j] = mp[i-j].back();
                mp[i-j].pop_back();
            }
        }
    }
};

