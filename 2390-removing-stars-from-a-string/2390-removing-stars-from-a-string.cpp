class Solution {
public:
    string removeStars(string s) {

        stack<char> st;
        int n = s.length();

        for(int i=0;i < n;i++) {

            if(s[i] == '*') {

                st.pop();
            }
            else {

                st.push(s[i]);
            }
        }

        int size = st.size();
        string str = "";

        for(int i=0;i < size;i++) {

            str += st.top();
            st.pop();
        }

        reverse(str.begin(),str.end());

        return str;
    }
};