class Solution {

public:
    vector<char> reverseString(vector<char>&s) {

        int n = s.size();
        char ch = '\0';

        for(int i=0;i < n/2;i++) {

            ch = s[i];
            s[i] = s[n-i-1];
            s[n-i-1] = ch;
        }

        return s;
    }
};