class Solution {
public:
    vector<int> diStringMatch(string s) {

        vector<int> ans;
        int n = s.length();
        int val = 0;
        int sum = n*(n+1)/2;

        int r = n;
        int l = 0;

        for(int i=0;i < n;i++) {

            if(s[i] == 'I') {

                ans.push_back(l);
                val += l;
                l++;
            }
            else {

                ans.push_back(r);
                val += r;
                r--;
            }
        }

        int rem = sum - val;
        ans.push_back(rem);

        return ans;
    }
};