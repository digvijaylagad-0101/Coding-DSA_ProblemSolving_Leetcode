class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        vector<int> ans;
        unordered_map<int,int> mp;

        for(int i=0;i < n;i++) {

            int compliment = target - nums[i];

            if(mp.find(compliment) != mp.end()) {

                ans.push_back(mp[compliment]);
                ans.push_back(i);
            }

            mp[nums[i]] = i;
        }

        return ans;
    }
};