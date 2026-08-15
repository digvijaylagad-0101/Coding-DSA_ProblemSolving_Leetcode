class Solution {
public:
    bool isPowerOfThree(int n) {
        
        if(n == 1) 
            return true;
        
        long long ans = 1;

        while(ans < n) {

            ans *= 3;

            if(n == ans) {

                return true;
            }
        }

        return false;
    }
};