class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>>res(r,vector<int>(c,0));
        vector<int>dummy;
        int n = mat.size();
        int m = mat[0].size();
        if (m * n != r * c) {
            return mat; 
        }
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
              dummy.push_back(mat[i][j]);
            }
        }

        for(int i=r-1;i>=0;i--)
        {
            for(int j=c-1;j>=0;j--)
            {
             res[i][j] = dummy.back();
             dummy.pop_back();
            }
        }

        return res;
    }
};