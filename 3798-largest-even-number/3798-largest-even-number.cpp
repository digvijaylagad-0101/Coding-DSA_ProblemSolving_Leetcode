class Solution {
public:
    string largestEven(string s) {

        int len = s.length();
        string str = "";

        for(int i = len-1;i >= 0;i--) {

            if(s[i] == '2') {

                str = s.substr(0,i+1);
                break;
            }
        }

        return str;
    }
};