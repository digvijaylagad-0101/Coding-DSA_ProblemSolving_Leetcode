class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {

        int n = s.length();
        vector<vector<int>> ans;
        int left = 0;

        for(int right = 1;right <= n;right++) {

            if(right == n || s[left] != s[right]) {

                if(right - left >= 3) {

                    ans.push_back({left,right-1});
                }
                left = right; 
            }
        }

        return ans;
    }
};