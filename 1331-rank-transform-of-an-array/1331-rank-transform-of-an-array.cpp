class Solution {

public:
    vector<int> arrayRankTransform(vector<int>&arr) {

        int n = arr.size();
        vector<int> cp;
        cp = arr;
        vector<int> ans;

        sort(cp.begin(),cp.end());

        if(n == 0)
           return {};

        unordered_map<int,int> umpp;

        int rank = 1;
        umpp[cp[0]] = rank;

        for(int i=1;i < n;i++) {

            if(cp[i-1] != cp[i]) {

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