int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int minn = nums[0];
        int max = nums[nums.size()-1];
        int gcd = 1;
        
        for(int i= 1 ;i<=min(max,minn);i++)
        {
            if(minn % i == 0 && max % i == 0)
            {
                gcd = i;
            }
        }
        return gcd;
    }