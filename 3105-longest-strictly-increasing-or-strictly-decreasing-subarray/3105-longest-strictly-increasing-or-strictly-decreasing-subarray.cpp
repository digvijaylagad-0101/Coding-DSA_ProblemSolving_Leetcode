class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {

        int n = nums.size();
        int len = 1;

        for(int i=0;i < n;i++) {

            int cntI = 0;
            int cntD = 0;
            for(int j=i+1;j < n;j++) {

                if(nums[j] > nums[j-1] && cntD == 0) {

                    len = max(len,j-i+1);
                    cntI++;
                }
                else if(nums[j] < nums[j-1] && cntI == 0) {

                    len = max(len,j-i+1);
                    cntD++;
                }
                else {

                    break;
                }
            }
        }

        return len;
    }
};