class Solution {
public:
    string reverseStr(string s, int k) {

        int len = s.length();
        string ans = "";
        int i=0;

        while(i < len) {

            string rev = s.substr(i,k);
            reverse(rev.begin(),rev.end());
            ans += rev;
            i = i+k;

            if(i < len) {

                ans += s.substr(i,k);
            }
            i = i+k;
        }

        return ans;
    }
};