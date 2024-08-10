/*Brute Froce solution
Time Complexity: O(N*N) 

Space Complexity: O(N*N) */

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       
        int n = matrix.size();
        int m = matrix[0].size();
       vector < vector < int >> ans(n,vector<int>(n,0));
        for(int i =0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                ans[j][m-1-i] = matrix[i][j];
            }
        }
        matrix = ans;
        
    }
    
};


/*Optimal Solution
Time Complexity: O(N*N) 

Space Complexity: O(1) */


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       
        int n = matrix.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                swap(matrix[j][i],matrix[i][j]);
            }
        }

        for(int i=0;i<n;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
        
    }
    
};