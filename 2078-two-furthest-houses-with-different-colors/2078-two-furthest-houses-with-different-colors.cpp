class Solution {
public:
    int maxDistance(vector<int>& colors) {
        
        int n = colors.size();
        int val = 0,ans = 0;

        for(int i=0;i < n-1;i++) {

            for(int j=n-1;j >= i+1;j--) {

                if(colors[i] != colors[j]) {

                    val = abs(i-j);
                    ans = max(ans,val);
                }
                else {

                    continue;
                }
            }
        }

        return ans;
    }
};