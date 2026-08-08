class Solution {
public:
    long long removeZeros(long long n) {
        
        string s = to_string(n);
        typedef long long ll;
        ll len = s.length();
        string str = "";

        for(int i=0;i < len;i++) {

            if(s[i] != '0') {

                str += s[i];
            }
        }

        long long val = stoll(str);

        return val;
    }
};