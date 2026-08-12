class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_map<int,vector<int>> umpp;

        for(int i=0;i < nums.size();i++) {

            umpp[nums[i]].push_back(i);
        }

        for(auto it : umpp) {

            if(it.second.size() >= 2) {

                for(int i=1;i < it.second.size();i++) {

                    int diff = abs(it.second[i] - it.second[i-1]);
                    if(diff <= k)
                       
                       return true;
                }
            }
        }

        return false;
    }
};