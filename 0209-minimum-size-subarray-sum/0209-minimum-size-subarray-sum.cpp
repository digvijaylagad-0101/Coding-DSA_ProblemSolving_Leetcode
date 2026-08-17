class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int n = nums.size();
        int idx = 0,i=0;
        int val = 0,ans = INT_MAX;

        for(int i=0;i < n;i++) {

            val += nums[i];

            while(val >= target) {

                ans = min(ans,i - idx + 1);
                val -= nums[idx];
                idx++;
            }
        } 

        return (ans == INT_MAX) ? 0 : ans;
    }
};