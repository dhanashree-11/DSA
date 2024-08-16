int median(vector<vector<int>> &matrix, int m, int n) {
    vector<int>res;
            for(int i=0;i<m;i++)
            {
                for(int j=0;j<n;j++)
                {
                    res.push_back(matrix[i][j]);
                }
            }
            
            sort(res.begin(),res.end());
            int start = 0;
            int end = res.size()-1;
            int mid = (start + end) /2;
            
            return res[mid];
}