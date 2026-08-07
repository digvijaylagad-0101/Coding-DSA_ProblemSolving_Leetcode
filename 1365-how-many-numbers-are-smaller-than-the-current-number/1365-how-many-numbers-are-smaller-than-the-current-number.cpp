class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> cp = nums;
        sort(cp.begin(),cp.end());
        unordered_map<int,int> mp;
        vector<int> ans;

        mp[cp[0]] = 0;
        int cnt = 1;

        for(int i=1;i < n;i++) {

            if(cp[i] == cp[i-1]) {

                mp[cp[i]] = mp[cp[i-1]];
            }
            else {

                mp[cp[i]] = cnt;
            }

            cnt++;
        }

        for(int i=0;i < n;i++) {

            ans.push_back(mp[nums[i]]);
        }

        return ans;
    }
};