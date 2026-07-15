class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        
        int sumOdd = 0;
        int sumEven = 0;
        int ans = 0;

        for(int i=1;i <= 2*n;i++) {

            if(i % 2 != 0) {

                sumOdd += i;
            }
            else {

                sumEven += i;
            }
        }

        for(int i=n;i >= 1;i--) {

            if(sumOdd % i == 0 && sumEven % i == 0) {

                ans = i;
                break;
            }
        }

        return ans;
    }
};