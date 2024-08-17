class Solution {
public:
    bool solveSudoku(vector<vector<char>>& board) {
        vector<set<int>>rows(9),col(9),box(9);

        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j] !='0')
                {
                int num = board[i][j]-'0';
                int index = (i/3)*3+(j/3);
                    rows[i].insert(num);
                    col[j].insert(num);
                    box[index].insert(num);
                }
            }
        }
        return backtrack(board,rows,col,box);
    }

    bool backtrack(vector<vector<char>>& board,vector<set<int>>&rows,vector<set<int>>&col,vector<set<int>>&box,int i=0,int j=0)
    {
        if(i==9)
        {
            return true;
        }
        if(j==9)
        {
            return backtrack(board,rows,col,box,i+1,0);
        }

        if(board[i][j] != '.')
        {
            return backtrack(board,rows,col,box,i,j+1);
        }


        int boxindex = (i/3)*3+(j/3);
        for(int num = 1;num<=9;num++)
        {
            if(rows[i].count(num)==0 &&col[j].count(num)==0 && box[boxindex].count(num)==0)
            {   board[i][j] = num + '0';
                rows[i].insert(num);
                col[j].insert(num);
                box[boxindex].insert(num);
            

            if(backtrack(board,rows,col,box,i,j+1))
            {
                return true;
            }
            else
            {
                board[i][j] ='.';
                rows[i].erase(num);
                col[j].erase(num);
                box[boxindex].erase(num);
            }
            }
        }
        return false;

    }
};