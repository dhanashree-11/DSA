class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        vector<unordered_set<int>>rows(9),cols(9),boxes(9);
        for (int r = 0; r < 9; r++) 
        {
            for (int c = 0; c < 9; c++) 
            {
                if (board[r][c] != '.') 
                {
                    int num = board[r][c] - '0'; 
                    int boxIndex = (r / 3) * 3 + (c / 3);

                    if (rows[r].count(num) == 1 || cols[c].count(num) == 1 || boxes[boxIndex].count(num) == 1) 
                    {
                        return false;
                    }
                    rows[r].insert(num);
                    cols[c].insert(num);
                    boxes[boxIndex].insert(num);
                }
            }
        }
        return true;
    }
};

