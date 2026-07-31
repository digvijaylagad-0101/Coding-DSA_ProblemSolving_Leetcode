class Solution {
public:
    string reverseWords(string s) {

        vector<string> words;
        string str = "";
        int n = s.length();

        for(int i=0;i < n;i++) {

            if(s[i] == ' ') {

                if(str != "") {

                    words.push_back(str);
                    str = "";
                }
            }
            else {

                str += s[i];
            }
        }

        // for last word
        if(str != "") {

            words.push_back(str);
        }

        int size = words.size();
        string temp = "";

        for(int i=0;i < size/2;i++) {

            temp = words[i];
            words[i] = words[size-i-1];
            words[size-i-1] = temp;
        }

        string ans = "";

        for(int i=0;i < size;i++) {

            if(i != size-1) {

                ans += (words[i] + ' ');   
            }
            else {

                ans += words[i];
            }
        }

        return ans;
    }
};