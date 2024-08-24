class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int>res;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

            int i=0;
            int j=0;
            while(i<n1 && j<n2)
            {
                if(nums1[i] == nums2[j])
                {
                    res.push_back(nums1[i]);  // 1 1 2 2
                    i++;                      // 2 2
                    j++;
                }
                else if(nums1[i] < nums2[j])
                {
                    i++;
                }
                else if(nums1[i] > nums2[j])
                {
                    j++;
                }
            }

        return res;

    }
};