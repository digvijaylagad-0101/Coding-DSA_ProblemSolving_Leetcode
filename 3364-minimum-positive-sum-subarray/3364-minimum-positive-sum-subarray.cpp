class Solution {

public:
    int minimumSumSubarray(vector<int>&nums, int l, int r) {

        int n = nums.size();
        int ans = INT_MAX;
        bool flag = false;

        while(l <= r) {

            for(int i=0;i+l <= n;i++) {
                
                int sum = 0;
                for(int j=i;j < i+l;j++) {

                    sum += nums[j];
                }
                
                if(sum > 0) {

                    ans = min(ans,sum);
                    flag = true;
                }
            }
            l++;
        } 

        if(flag)
           return ans;
        else
           return -1;
    }
};