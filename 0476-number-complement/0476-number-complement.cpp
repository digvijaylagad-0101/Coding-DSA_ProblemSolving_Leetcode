class Solution {
public:
    int findComplement(int num) {
        
        string s = "";

        while(num != 0) {

            int rem = num % 2;
            
            if(rem == 0) {

                s.insert(s.begin(),'1');
            }
            else {

                s.insert(s.begin(),'0');
            }

            num /= 2;
        }

        int degree = 0;
        int n = s.length();
        int ans = 0;

        for(int i=n-1;i >= 0;i--) {

            if(s[i] == '1') {

                ans += (pow(2,degree)*1);
                degree++;
            }
            else {

                degree++;
            }
        }

        return ans;
    }
};