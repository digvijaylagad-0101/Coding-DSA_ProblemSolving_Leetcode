class Solution {
public:
    string reverseVowels(string s) {

        int n = s.size();
        vector<char> v;
        string str = "aeiou";

        for(int i=0;i < n;i++) {

            if(find(str.begin(),str.end(),tolower(s[i])) != str.end()) {

                v.push_back(s[i]);
            }
        }

        int size = v.size();
        char ch = '\0';

        for(int i=0;i < size/2;i++) {

            ch = v[i];
            v[i] = v[size-i-1];
            v[size-i-1] = ch;
        }

        int idx = 0;
        string ans = "";

        for(int i=0;i < n;i++) {

            if(find(str.begin(),str.end(),tolower(s[i])) == str.end()) {

                ans += s[i];
            }
            else {

                ans += v[idx];
                idx++;
            }
        }

        return ans;
    }
};