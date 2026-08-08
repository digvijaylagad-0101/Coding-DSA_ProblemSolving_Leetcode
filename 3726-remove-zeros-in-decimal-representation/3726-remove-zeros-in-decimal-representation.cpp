class Solution {
public:
    long long removeZeros(long long n) {
        
        string s = to_string(n);
        typedef long long ll;
        ll m = s.length();
        string str = "";

        for(int i=0;i < m;i++) {

            if(s[i] != '0') {

                str += s[i];
            }
        }

        ll val = stoll(str);

        return val;
    }
};