class Solution {
public:
    int reverseBits(int n) {
        
        int num = n;
        int ans = 0;
        string s = "";

        for(int i=0;i < 32;i++) {

            int val = num % 2;
            s += to_string(val);
            num /= 2;
        }

        for(int i=0;i < 32;i++) {

            ans += pow(2,32 - i - 1) * (s[i] - '0');
        }

        return ans;
    }
};