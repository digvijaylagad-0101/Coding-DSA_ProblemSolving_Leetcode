class Solution {
public:
    int maxProduct(int n) {
        
        string s = to_string(n);
        int len = s.length();
        int ans = 0,val = 0;

        for(int i=0;i < len-1;i++) {

            for(int j=i+1;j < len;j++) {
                
                
                val = (s[i] - '0') * (s[j] - '0');

                ans = max(ans,val);
            }
        }

        return ans;
    }
};