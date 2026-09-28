class Solution {

public:
    int maxDepth(string s) {

        stack<char> st;
        int top = -1;
        int depth = 0;

        for(int i=0;i < s.length();i++) {

            if(s[i] == '(') {

                top++;
                st.push(s[i]);
            }
            else if(s[i] == ')' && (!st.empty())) {

                depth = max(depth,top+1);
                st.pop();
                top--;
            }
            else {

                continue;
            }
        }

        return depth;
    }
};