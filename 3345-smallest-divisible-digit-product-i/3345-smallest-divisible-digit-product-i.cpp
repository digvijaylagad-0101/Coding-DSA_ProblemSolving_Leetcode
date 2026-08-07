class Solution {
public:
    int smallestNumber(int n, int t) {
        
        int ans = 0;

        while(n >= 1 && n <= 100) {
            
            int product = 1;
            int num = n;
            while(num != 0) {

                int rem = num % 10;
                product *= rem;
                num /= 10;
            }

            if(product % t == 0) {

                ans = n;
                break;
            }

            n++;
        }

        return ans;
    }
};