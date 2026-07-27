class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int n = nums.size();
        int max = 0,prevMax = 0;
        
        if(nums[0] > nums[1]) {

            max = nums[0];
            prevMax = nums[1];
        }
        else {

            max = nums[1];
            prevMax = nums[0];
        }

        for(int i=2;i < n;i++) {

            if(nums[i] >= max) {

                prevMax = max;
                max = nums[i];
            }
            else if(nums[i] <= max && nums[i] > prevMax) {

                prevMax = nums[i];
            }
            else {

                continue;
            }
        }

        return (max - 1)*(prevMax - 1);
    }
};