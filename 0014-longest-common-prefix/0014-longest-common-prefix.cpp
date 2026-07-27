class Solution {

public:
    string longestCommonPrefix(vector<string>&strs) {

        int n = strs.size();
        int size = strs[0].size();
        string ans = "";

        for(int i=0;i < size;i++) {
            
            int cnt = 0;
            for(int j=0;j < n-1;j++) {

                if(strs[j][i] == strs[j+1][i]) {

                    cnt++;
                }
            }

            if(cnt == n-1) {

                ans += strs[0][i];
            }
            else {

                break;
            }
        }

        return ans;
    }
};