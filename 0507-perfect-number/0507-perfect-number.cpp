class Solution {
public:
    bool checkPerfectNumber(int num) {

        int n = num / 2;
        int ans = 0;

        for(int i=1;i <= n;i++) {
            
            if(num % i == 0) {

                ans += i;
            }
        }

        if(ans == num)
            return true;
        else
            return false;
    }
};