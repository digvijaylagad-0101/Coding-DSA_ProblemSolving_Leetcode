class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {

        int n = nums.size();
        unordered_map<int,int> umpp1;
        map<int,vector<int>> umpp2;
        vector<int> ans;

        for(int x : nums) {

            umpp1[x]++;
        }

        for(auto it : umpp1) {

            umpp2[it.second].push_back(it.first);
        }

        for(auto it : umpp2) {
            
            sort(it.second.begin(),it.second.end());
            int size = it.second.size();

            for(int i = size - 1; i >= 0; i--) {

                ans.insert(ans.end(), it.first, it.second[i]);
            }
        }

        return ans;
    }
};