class Solution {
public:
    bool canBeEqual(string s1, string s2) {

        int n = s1.size();
        int cnt = 0;

        for(int i=0;i < n;i++) {

            int next = i+2;

            if(next < n) {

                if(s1[i] == s2[next] || s1[i] == s2[i]) {

                    cnt++;
                }
            }
            else {

                if(s1[i] == s2[i-2] || s1[i] == s2[i]) {

                    cnt++;
                }
            }
        }

        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());

        if(s1 == s2 && cnt == n)
            return true;
        else
            return false;
    }
};