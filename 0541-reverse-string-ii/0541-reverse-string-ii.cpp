class Solution {
public:
    string reverseStr(string s, int k) {

        int len = s.length();
        string ans = "";
        int i=0;

        while(i < len) {

            string str = s.substr(i,k);
            reverse(str.begin(),str.end());
            ans += str;
            i = i+k;
            if(i < len) {

                ans += s.substr(i,k);
            }
            i = i+k;
        }

        return ans;
    }
};