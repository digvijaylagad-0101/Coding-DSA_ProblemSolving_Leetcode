class Solution {

public:
    bool checkString(string s) {

        int n = s.length();
        int cntB = count(s.begin(),s.end(),'b');
        int cntA = count(s.begin(),s.end(),'a');

        for(int i=0;i < n;i++) {

            if(s[i] == 'a' && cntA == s.length()) {

                return true;
            }
            else if(s[i] == 'a') {

                continue;
            }
            else if(s[i] == 'b' && cntB == s.length()-i) {

                return true;
            }
            else {

                break;
            }
        }

        return false;
    }
};