class Solution {

public:
    bool isHappy(int n) {

        if(n <= 0)
           return false;
        
        if(n == 1)
           return true;
        
        int val = n;
        unordered_set<int> s;

        while(val != 1) {
            
            int ans = 0;

            if(s.find(val) != s.end())
                return false;
            
            s.insert(val);

            while(val != 0) {

                int rem = val % 10;
                ans += pow(rem,2);
                val /= 10;
            }

            val = ans;
        }

        return true;
    }
};