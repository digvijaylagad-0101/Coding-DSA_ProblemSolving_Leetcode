class Solution {
public:
    int reverseDegree(string s) {
        
        int n = s.length();
        int result = 0;
        int idx = 1;

        for(int i=0;i < n;i++) {

            int pos = 26 - (s[i] - 'a');
            int val = pos * idx;

            result += val;
            idx++;
        }

        return result;
    }
};