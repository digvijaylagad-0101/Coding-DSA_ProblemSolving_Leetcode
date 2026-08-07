class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        
        int small = *min_element(nums.begin(),nums.end());
        int large = *max_element(nums.begin(),nums.end());
        
        vector<int> v;

        int size = large - small;
        if(size == nums.size() - 1) 
           
           return v;

        for(int i = small+1;i < large;i++) {

            if(find(nums.begin(),nums.end(),i) == nums.end()) {

                v.push_back(i);
            }
        }

        return v;
    }
};