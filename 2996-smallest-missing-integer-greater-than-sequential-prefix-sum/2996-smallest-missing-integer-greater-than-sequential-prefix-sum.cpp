class Solution {
public:
    int missingInteger(vector<int>& nums) {
        
        int n = nums.size();
        int val = nums[0];
        int ans = 0;

        for(int j=1;j < n;j++) {

            if(nums[j] == nums[j-1]+1) {

                val += nums[j];
            }
            else {

                break;
            }
        }

        for(int i = val; ;i++) {

            if(find(nums.begin(),nums.end(),i) == nums.end()) {

                ans = i;
                break;
            }
        }

        return ans;
    }
};