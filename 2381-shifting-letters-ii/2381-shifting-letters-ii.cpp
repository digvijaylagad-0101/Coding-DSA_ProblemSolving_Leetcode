class Solution {

public:
    string shiftingLetters(string s,vector<vector<int>>&shifts) {

        int len = s.length();
        int n = shifts.size();
        vector<int> diff(len,0);

        for(auto it : shifts) {

            int l = it[0];
            int r = it[1];
            int val = it[2];
            int x = 1;

            if(val == 0) {

                x = -1;
            }

            diff[l] += x;

            if((r+1) < len) {

                diff[r+1] -= x;
            }
        }

        // take cumulative sum of diff for final shift of how much
        for(int i=1;i < len;i++) {

            diff[i] += diff[i-1];
        }

        for(int i=0;i < len;i++) {

            int shift = diff[i] % 26;

            if(shift < 0) {

                shift += 26;
            }

            s[i] = (((s[i] - 'a') + shift) % 26) + 'a';
        }

        return s;
    }
};