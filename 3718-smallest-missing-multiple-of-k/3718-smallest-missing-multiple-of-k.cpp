class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        
        int val = 0;
        int ans = 0;
        for(int i=1; ;i++) {

            val = i*k;

            if(find(nums.begin(),nums.end(),val) == nums.end()) {

                ans = val;
                break;
            }
        }

        return ans;
    }
};