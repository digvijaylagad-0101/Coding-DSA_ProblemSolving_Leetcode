class Solution {
public:
    int singleNumber(vector<int>& nums) {

        unordered_map<int,int> umpp;
        vector<int> cp = nums;

        for(int it : nums) {

            umpp[it]++;

            if(umpp[it] == 2) {
                
                cp.erase(remove(cp.begin(),cp.end(),it),cp.end());
            }
        }

        return cp[0];
    }
};