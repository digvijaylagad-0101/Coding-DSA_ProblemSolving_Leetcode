class Solution {
public:
    int reverseBits(uint32_t n) {

        int num = n;
        string s = "";

        // Store all 32 bits
        for(int i = 0; i < 32; i++) {

            int val = num % 2;
            s += to_string(val);
            num /= 2;
        }

        int ans = 0;

        // Convert the string back to decimal
        for(int i = 0; i < 32; i++) {

            ans += pow(2, 32 - i - 1) * (s[i] - '0');
        }

        return ans;
    }
};