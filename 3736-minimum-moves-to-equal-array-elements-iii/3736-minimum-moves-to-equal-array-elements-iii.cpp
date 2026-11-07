class Solution {
public:
    int minMoves(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int n = nums.size();
        int ans = 0;

        for(int i=n-2;i >= 0;i--) {

            int diff = nums[n-1] - nums[i];
            ans += diff;
        }

        return ans;
    }
};