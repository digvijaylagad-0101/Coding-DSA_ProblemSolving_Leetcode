class Solution {

public:
    int beautySum(string s) {

        int n = s.length();
        int ans = 0;

        for(int i=0;i < n;i++) {
            
            unordered_map<char,int> umpp;

            for(int j = i;j < n;j++) {

                umpp[s[j]]++;

                if(j - i + 1 >= 3) {

                    int large = 0;
                    int small = INT_MAX;

                    for(auto it : umpp) {

                        large = max(large,it.second);
                        small = min(small,it.second);
                    }

                    ans += (large - small);
                }
            }
        }

        return ans;
    }
};