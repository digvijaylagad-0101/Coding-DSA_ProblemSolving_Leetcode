class Solution {
public:
    bool backspaceCompare(string s, string t) {

        stack<char> st1;
        stack<char> st2;
        int top1 = -1;
        int top2 = -1;

        for(int i=0;i < s.length();i++) {

            if(s[i] != '#') {

                st1.push(s[i]);
                top1++;
            }
            else if(s[i] == '#' && st1.empty()) {

                top1 = -1;
            }
            else {

                st1.pop();
                top1--;
            }
        }

        for(int i=0;i < t.length();i++) {

            if(t[i] != '#') {

                st2.push(t[i]);
                top2++;
            }
            else if(t[i] == '#' && st2.empty()) {

                top2 = -1;
            }
            else {

                st2.pop();
                top2--;
            }
        }

        return (st1 == st2);
    }
};