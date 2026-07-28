class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int n = nums.size();
        int max = 0,prevMax = 0;

        if(nums[1] > nums[0]) {

            max = nums[1];
            prevMax = nums[0];
        }
        else {

            max = nums[0];
            prevMax = nums[1];
        }

        for(int i=2;i < n;i++) {

            if(nums[i] >= max) {

                prevMax = max;
                max = nums[i];
            }
            else if(nums[i] <= max && nums[i] > prevMax) {

                prevMax = nums[i];
            }
        }

        return (max - 1) * (prevMax - 1);
    }
};