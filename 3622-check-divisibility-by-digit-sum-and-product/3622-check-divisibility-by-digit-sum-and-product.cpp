class Solution {

public:
    bool checkDivisibility(int n) {

        int sum = 0;
        int product = 1;
        int val = n;

        while(n != 0) {

            int rem = n % 10;
            sum = sum + rem;
            product = product * rem;
            n /= 10;
        }

        int total = sum + product;

        if(val % total == 0)
           return true;
        else
           return false;
    }
};