class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        auto it = find(nums.begin(), nums.end(), 0);
        vector<int> ans;
        long long val = 1, val2 = 1, val3 = 0;

        if (it != nums.end()) {

            vector<int> ans(n, 0);

            // Check if more than one zero exists
            if (find(it + 1, nums.end(), 0) != nums.end()) {
                return ans;
            }

            for (int i = 0; i < n; i++) {

                if (nums[i] != 0) {
                    val *= nums[i];
                }
            }

            ans[it - nums.begin()] = val;
            return ans;
        }
        else {

            for (int i = 0; i < n; i++) {

                val2 *= nums[i];
            }

            for (int i = 0; i < n; i++) {

                val3 = val2 / nums[i];
                ans.push_back(val3);
            }
        }

        return ans;
    }
};