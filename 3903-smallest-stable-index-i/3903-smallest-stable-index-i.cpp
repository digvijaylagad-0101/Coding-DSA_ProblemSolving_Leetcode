class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
        int n = nums.size();

        for(int i=0;i < n;i++) {

            int val1 = *max_element(nums.begin(),nums.begin()+i+1);
            int val2 = *min_element(nums.begin()+i,nums.end());

            int result = val1-val2;
            if(result <= k) {

                return i;
            }
        }

        return -1;
    }
};