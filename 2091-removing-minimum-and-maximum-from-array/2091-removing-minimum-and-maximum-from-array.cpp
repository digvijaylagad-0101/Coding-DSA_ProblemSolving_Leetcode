class Solution {
public:
    int minimumDeletions(vector<int>& nums) {

        int small = *min_element(nums.begin(),nums.end());
        int large = *max_element(nums.begin(),nums.end());
        int n = nums.size();
        vector<int> v;
        int ans1 = INT_MAX, ans2 = INT_MAX;

        for(int i=0;i < n;i++) {

            if(nums[i] == small || nums[i] == large) {

                v.push_back(i);
            }
        }

        sort(v.begin(),v.end());

        if(n == 1) {

            return 1;
        }
        else {

            ans1 = min(v[0]+1 + (v[1]-v[0]),(v[0]+1)+(n-v[1]));
            ans2 = min(ans1,(n-v[1])+(v[1]-v[0]));
        }

        return ans2;
    }
};