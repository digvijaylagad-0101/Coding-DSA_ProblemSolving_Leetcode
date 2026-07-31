class Solution {

public:
    string longestCommonPrefix(vector<string>&strs) {

        int m = strs.size();
        int n = strs[0].length();
        string ans = "";
        
        for(int len = 0;len < n;len++) {
            
            int cnt = 0;
            for(int i=0;i < m-1;i++) {

                if(strs[i][len] == strs[i+1][len]) {

                    cnt++;
                }
            }
            if(cnt == m-1) {

                ans += strs[0][len];
            }
            else {

                break;
            }
        }

        return ans;
    }
};