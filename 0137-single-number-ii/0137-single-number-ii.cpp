class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int n = nums.size();
        unordered_map<int,int> umpp;

        for(int it : nums) {

            umpp[it]++;
        }

        for(auto it : umpp) {

            if(it.second == 1) {

                return it.first;
            }
        }

        return -1;
    }
};