class Solution {

public:
    int maxSubarrayLength(vector<int>&nums,int k) {

        int n = nums.size();
        int ans = 0;
        int i = 0;
        unordered_map<int,int> umpp;

        for(int j=0;j < n;j++) {

            umpp[nums[j]]++;

            while(umpp[nums[j]] > k) {

                umpp[nums[i]]--;
                i++;
            }

            ans = max(ans,j-i+1);
        }

        return ans;
    }
};