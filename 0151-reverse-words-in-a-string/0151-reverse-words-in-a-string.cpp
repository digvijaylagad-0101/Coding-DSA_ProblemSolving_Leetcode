class Solution {

public:
    string reverseWords(string s) {

        int n = s.length();
        vector<string> words;
        string str = "";
        string ans = "";

        for(int i=0;i < n;i++) {

            if(s[i] == ' ' && str != "") {

                words.push_back(str);
                str = "";
            }
            else if(s[i] != ' ') {

                str += s[i];
            }
        }

        // for last word
        if(str != "") {

            words.push_back(str);
        }

        int v = words.size();
        string temp = "";

        for(int i=0;i < v/2;i++) {

            temp = words[i];
            words[i] = words[v-i-1];
            words[v-i-1] = temp;
        }

        for(int i=0;i < v;i++) {

            if(i != v-1) {

                ans += (words[i] + ' ');
            }
            else {

                ans += words[i];
            }
        }

        return ans;
    }
};