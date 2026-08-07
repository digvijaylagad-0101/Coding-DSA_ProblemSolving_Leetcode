class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        
        int n = nums.size();
        int large = *max_element(nums.begin(),nums.end());
        int small = *min_element(nums.begin(),nums.end());

        int size = large - small;
        vector<int> v;

        if(size == n-1) 
           
           return v;
        
        for(int i = small+1;i < large;i++) {

            if(find(nums.begin(),nums.end(),i) == nums.end()) {

                v.push_back(i);
            }
        }

        return v;
    }
};