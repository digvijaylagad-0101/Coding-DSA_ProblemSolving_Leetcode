class Solution {

public:
    string shiftingLetters(string s,vector<vector<int>>&shifts) {

        int n = s.length();

        vector<int> diff(n,0);

        for(auto it : shifts) {

            int l = it[0];
            int r = it[1];
            int val = it[2];
            int x = 0;

            if(val == 0) {

                x -= 1;
            }
            else {

                x += 1;
            }

            //imp
            diff[l] += x;
            if((r+1) < n) {

                diff[r+1] -= x;
            }
        }

        // cumulative sum for final change of how much and at which index
        for(int i=1;i < n;i++) {

            diff[i] += diff[i-1];
        }

        // final change
        for(int i=0;i < n;i++) {

            int shift = diff[i] % 26;

            if(shift < 0) {

                shift += 26;
            }

            s[i] = (((s[i] - 'a') + shift) % 26) + 'a';
        }

        return s;
    }
};