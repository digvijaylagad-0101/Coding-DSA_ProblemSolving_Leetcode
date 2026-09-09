class Solution {
public:
    int countCommas(int n) {

        if(n < 1000) {

            return 0;
        }
        else if(n >= 1000 && n < 10000) {

            int val = n - 1000 + 1;
            return val;
        }
        else if(n >= 10000 && n < 100000) {

            int val = n - 1000 + 1;
            return val;
        }
        else if(n >= 100000) {

            int val = n - 1000 + 1;
            return val;
        }
        
        return 0;
    }
};