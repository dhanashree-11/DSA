class Solution {
public:
    int minBitFlips(int start, int goal) {
        vector<int>s;

        while(start > 0)
        {
            if(start % 2 == 0)
            {
                s.push_back(0);
            }
            else
            {
                s.push_back(1);
            }
            start = start/2;
        }
        vector<int>g;

        while(goal > 0)
        {
            if(goal % 2 == 0)
            {
                g.push_back(0);
            }
            else
            {
                g.push_back(1);
            }
            goal = goal/2;
        }
        while (s.size() < g.size()) {
            s.push_back(0);
        }
        while (g.size() < s.size()) {
            g.push_back(0);
        }
        int count = 0;

        for(int i=0;i<s.size();i++)
        {
            if(s[i] != g[i])
            {
                s[i] = g[i];
                count++;
            }
        }
        
        return count;
    }
};