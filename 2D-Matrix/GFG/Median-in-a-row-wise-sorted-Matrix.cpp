int median(vector<vector<int>> &matrix, int R, int C){

    int s = 1, e = 2000;

    while (s <= e) {
        int m = (s + e) /2;

        int countL = 0, countR = 0;

        for (int i = 0; i < R; ++i) {          
            for (int j = 0; j < C; ++j) {     
                if (matrix[i][j] > m)
                    countR++;
                else
                    countL++;
            }
        }

        if (countL == countR)
            return m;
        else if (countL < countR)
            s = m + 1;
        else
            e = m - 1;
    }
    return s;


    }