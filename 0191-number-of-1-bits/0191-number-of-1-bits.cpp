class Solution {
public:
    int hammingWeight(int n) {
        
        int num = 0;

        while(n != 0) {

            int rem = n % 2;
            if(rem == 1) {

                num++;
            }

            n /= 2;
        }

        return num;
    }
};