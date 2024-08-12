//Time Complexity  : O(N∗M∗Log(Min(N,M)))
//Space Complexity : O(N∗M)

class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n = mat.size();      // Number of rows
        int m = mat[0].size();   // Number of columns
        map<int,vector<int>>mp;
        // Populate the map with diagonals
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                mp[i - j].push_back(mat[i][j]);
            }
        }

        for(auto &it:mp)
        {
            sort(it.second.begin(),it.second.end());
        }

        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=0;j--)
            {
                mat[i][j] = mp[i-j].back();
                mp[i-j].pop_back();
            }
        }

        return mat;

    }
};
   