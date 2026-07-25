class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int n = height.size();
        int l = 0;
        int r = n-1;
        int diff = 0,small = 0,area = 0,ans = 0;

        while(l < r) {

            diff = abs(l - r);
            small = min(height[l],height[r]);
            area = diff * small;

            ans = max(ans,area);

            if(height[l] < height[r]) {

                l++;
            }
            else {

                r--;
            }
        }

        return ans;
    }
};