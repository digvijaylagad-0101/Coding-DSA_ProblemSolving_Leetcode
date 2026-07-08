class Solution {

public:
    long long sumAndMultiply(int n) {
        
        typedef long long ll;

        ll num = n;
        ll val = 0,sum = 0;

        while(num != 0) {

            ll rem = num % 10;
            if(rem != 0) {

                val = val*10 + rem;
                sum += rem;
            }
            num /= 10;
        }
        
        ll x = 0;
        while(val != 0) {

            ll rem2 = val % 10;
            x = x*10 + rem2;
            val /= 10;
        }

        return x*sum;
    }
};