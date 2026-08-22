class Solution {

public:
    string removeDuplicates(string s) {

        int len = s.length();
        stack<char> st;
        int top = -1;

        for(int i=0;i < len;i++) {

            if(top == -1) {

                st.push(s[i]);
                top++;
            }
            else if(s[i] != st.top()) {

                st.push(s[i]);
                top++;
            }
            else {

                st.pop();
                top--;
            }
        }
        
        string str = "";

        while(!st.empty()) {

            str.insert(str.begin(),st.top());
            st.pop();
        }

        return str;
    }
};