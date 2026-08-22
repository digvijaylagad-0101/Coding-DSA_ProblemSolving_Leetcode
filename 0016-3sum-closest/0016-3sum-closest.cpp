class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        int n = nums.size();
        int ans = INT_MAX;
        int result = 0;

        sort(nums.begin(), nums.end());

        int i = 0;

        while(i < n - 2) {

            int j = i + 1;
            int k = n - 1;

            while(j < k) {

                int val = nums[i] + nums[j] + nums[k];

                int num = abs(target - val);

                if(num < ans) {

                    ans = num;
                    result = val;
                }

                if(val < target) {

                    j++;
                }
                else if(val > target) {

                    k--;
                }
                else {

                    return val;
                }
            }

            i++;
        }

        return result;
    }
};