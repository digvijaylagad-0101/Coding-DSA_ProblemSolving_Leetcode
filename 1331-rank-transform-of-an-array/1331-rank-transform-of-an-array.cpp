class Solution {

public:
    vector<int> arrayRankTransform(vector<int>&arr) {

        int n = arr.size();
        vector<int> cp = arr;
        vector<int> ans;

        sort(cp.begin(),cp.end());

        unordered_map<int,int> umpp;

        if(n == 0) 
           return {};

        int rank = 1;
        umpp[cp[0]] = rank;

        for(int i=1;i < n;i++) {

            if(cp[i] != cp[i-1]) {

                rank++;
            }

            umpp[cp[i]] = rank;
        }

        for(int i=0;i < n;i++) {

            ans.push_back(umpp[arr[i]]);
        }

        return ans;
    }
} ;