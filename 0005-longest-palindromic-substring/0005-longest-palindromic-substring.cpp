class Solution {

public:
    string longestPalindrome(string s) {

        int n = s.length();

        if(n == 1)
           return s;

        for(int len = n;len >= 1;len--) {

            for(int idx = 0;idx <= n-len;idx++) {

                bool flag = true;

                int l = idx;
                int r = idx + len - 1;

                while(l < r) {

                    if(s[l] != s[r]) {

                        flag = false;
                        break;
                    }

                    l++;
                    r--;
                }

                if(flag)
                   return s.substr(idx,len);
            }
        }

        return "";
    }
};