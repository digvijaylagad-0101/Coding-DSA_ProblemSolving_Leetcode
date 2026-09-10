class Solution {
public:
    bool isValid(string s) {

        int n = s.length();
        stack<char> st;
        int top = -1;
        int i=0;

        while(i < n) {

            if(i == 0 || top == -1) {

                top++;
                st.push(s[i]);
            }
            else if(st.top() == '(' && s[i] == ')') {

                st.pop();
                top--;
            }
            else if(st.top() == '[' && s[i] == ']') {

                st.pop();
                top--;
            }
            else if(st.top() == '{' && s[i] == '}') {

                st.pop();
                top--;
            }
            else {

                st.push(s[i]);
                top++;
            }

            i++;
        }

        return st.empty();
    }
};