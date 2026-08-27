class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        
        int num = x;
        int sum = 0;

        while(num != 0) {

            int rem = num % 10;
            sum += rem;
            num /= 10;
        }

        if(x % sum == 0)
           return sum;
        else
           return -1;
    }
};