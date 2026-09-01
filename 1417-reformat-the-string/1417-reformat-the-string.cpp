class Solution {
public:
    string reformat(string s) {

        vector<char> v1;
        vector<char> v2;
        string ans = "";

        for(int i=0;i < s.length();i++) {

            if(abs(s[i] - 'a') <= 26) {

                v1.push_back(s[i]);
            }
            else {

                v2.push_back(s[i]);
            }
        }

        int n1 = v1.size();
        int n2 = v2.size();

        if(n1 > n2 && (n1-n2) == 1) {

            for(int i=0;i < n2;i++) {

                ans += v1[i];
                ans += v2[i];
            }
            ans += v1[n1-1];
        }
        else if(n2 > n1 && (n2 - n1) == 1) {

            for(int i=0;i < n1;i++) {

                ans += v2[i];
                ans += v1[i];
            }
            ans += v2[n2-1];
        }
        else if(n1 == n2) {

            for(int i=0;i < n1;i++) {

                ans += v1[i];
                ans += v2[i];
            }
        }
        else {

            return "";
        }

        return ans;
    }
};