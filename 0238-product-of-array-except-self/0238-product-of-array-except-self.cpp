class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();
        auto it = find(nums.begin(),nums.end(),0);
        vector<int> ans;
        int val = 1,val2 = 1,val3 = 0;

        if(it != nums.end()) {

            vector<int> ans(n,0);

            if(find(it+1,nums.end(),0) != nums.end())
                return ans;
            
            for(int i=0;i < n;i++) {

                if(nums[i] != 0) {

                    val *= nums[i];
                }
            }

            ans[it - nums.begin()] = val;
            return ans;
        }
        else {

            for(int i=0;i < n;i++) {

                val2 *= nums[i];        // total multiplication
            }
            for(int i=0;i < n;i++) {

                val3 = val2 / nums[i];   // mul. of numbers except no. at current position
                ans.push_back(val3);
            }
        }

        return ans;
    }
};