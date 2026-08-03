class Solution {

public:
    int findLucky(vector<int>&arr) {

        int n = arr.size();
        unordered_map<int,int> umpp;
        int ans = -1;

        for(int it : arr) {

            umpp[it]++;
        }

        for(auto it : umpp) {

            if(it.first == it.second) {

                ans = max(ans,it.first);
            }
        }

        return ans;
    }
};