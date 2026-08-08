class Solution {

public:
    vector<int> frequencySort(vector<int>&nums) {

        unordered_map<int,int> umpp;
        map<int,vector<int>> mp;
        vector<int> ans;

        for(int x : nums) {

            umpp[x]++;
        }
        
        for(auto it : umpp) {

            mp[it.second].push_back(it.first);
        }

        for(auto it : mp) {

            int size = it.second.size();
            sort(it.second.begin(),it.second.end());

            for(int i = size-1;i >= 0;i--) {

                ans.insert(ans.end(),it.first,it.second[i]);
            }
        }

        return ans;
    }
};