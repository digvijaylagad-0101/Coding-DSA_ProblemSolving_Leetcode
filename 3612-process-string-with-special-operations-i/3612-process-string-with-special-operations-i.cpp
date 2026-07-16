class Solution {
public:
    string processStr(string s) {
        
        int len = s.length();
        string ans = "";

        for(int i=0;i < len;i++) {

            if(s[i] == '*') {

                int n = ans.length();
                ans = ans.substr(0,n-1);
            }
            else if(s[i] == '#') {

                ans += ans;
            }
            else if(s[i] == '%') {

                reverse(ans.begin(),ans.end());
            }
            else {

                ans += s[i];
            }
        }

        return ans;
    }
};