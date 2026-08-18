class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {

        int n = nums.size();
        int idx = n-k;
        unordered_map<int,set<int>> umpp;
        int num = 0,cnt = 0;
        int ans = 0;

        for(int i=0;i <= idx;i++) {
            
            num++;

            for(int j=i;j < i+k;j++) {

                umpp[nums[j]].insert(num);
            }
        }

        for(auto it : umpp) {

            if(it.second.size() == 1) {

                ans = max(ans,it.first);
                cnt++;
            }
        }

        if(cnt == 0)
           return -1;
        else
           return ans;
    }
};