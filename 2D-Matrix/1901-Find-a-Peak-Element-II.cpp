class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        vector <int> ans;

        for (int i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
            {
                bool IsPeak = true;
                if(i-1 >= 0 && mat[i][j] <=mat[i-1][j])
                {
                    IsPeak = false;
                }
                if(i+1 <=n-1 && mat[i][j] <= mat[i+1][j])
                {
                    IsPeak = false;
                }
                if(j-1 >= 0 && mat[i][j] <= mat[i][j-1])
                {
                    IsPeak = false;
                }
                if(j+1 <=m-1 && mat[i][j] <=mat[i][j+1])
                {
                    IsPeak = false;
                }
                if(IsPeak == true)
                {
                    return{i,j};
                }
            }
        }

        return {-1,-1};
    }
};