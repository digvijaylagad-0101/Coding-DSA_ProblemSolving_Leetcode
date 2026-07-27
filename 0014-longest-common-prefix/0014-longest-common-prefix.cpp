class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int n = strs.size();
        int len = INT_MAX;
        string ans = "";

        for(int i=0;i < n;i++) {

            int num = strs[i].length();
            len = min(len,num);
        }

        for(int i = 0;i < len;i++) {
            
            int cnt = 0;
            for(int j = 0;j < n-1;j++) {

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