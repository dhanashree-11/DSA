class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int>res;
        int n = mat.size();
        int m = mat[0].size();

        map<int,vector<int>>mp;

        //storing i+j as key and its corresponding values 
        for(int i=0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                mp[i+j].push_back(mat[i][j]);
            }
        }

        for(auto &it:mp)
        {
            if(it.first % 2 == 0)
            {
                reverse(it.second.begin(),it.second.end());
            }
            for(int i:it.second)
            {
                res.push_back(i);
            }
        }

        return res;

    }
};