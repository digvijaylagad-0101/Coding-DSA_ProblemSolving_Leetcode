class Solution {
public:
    bool divisorGame(int n) {
        
        int cnt = 0;

        while(n > 1) {

            int val = n / 2;

            for(int i = 1; i <= val; i++) {

                if(n % i == 0) {

                    n = n - i;
                    cnt++;
                    break;
                }
            }
        }

        if(cnt % 2 == 0)
            return false;
        else
            return true;
    }
};