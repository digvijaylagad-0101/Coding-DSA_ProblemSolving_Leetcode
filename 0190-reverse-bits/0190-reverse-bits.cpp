class Solution {
public:
    uint32_t reverseBits(uint32_t n) {

        uint32_t num = n;
        string s = "";

        // Store all 32 bits
        for(int i = 0; i < 32; i++) {

            int val = num % 2;
            s += to_string(val);
            num /= 2;
        }

        uint32_t ans = 0;

        // Convert the string back to decimal
        for(int i = 0; i < 32; i++) {

            ans += pow(2, 32 - i - 1) * (s[i] - '0');
        }

        return ans;
    }
};