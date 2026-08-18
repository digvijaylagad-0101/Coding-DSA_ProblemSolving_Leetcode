class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int num = *min_element(nums.begin(),nums.end());

        return num;
    }
};