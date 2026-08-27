class Solution {
public:
    int singleNumber(vector<int>& nums) {

        unordered_map<int,int> umpp;
        int ans = 0;

        for(int it : nums) {

            umpp[it]++;
        }

        for(auto it : umpp) {

            if(it.second == 1) {

                ans = it.first;
                break;
            }
        }

        return ans;
    }
};