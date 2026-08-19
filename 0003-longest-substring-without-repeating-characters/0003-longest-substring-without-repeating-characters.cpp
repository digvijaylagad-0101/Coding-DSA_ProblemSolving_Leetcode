class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int len = s.length();
        int left = 0;
        int ans = 0;
        unordered_map<char,int> umpp;

        for(int right = 0;right < len;right++) {

            umpp[s[right]]++;

            while(umpp[s[right]] > 1) {

                umpp[s[left]]--;
                left++;
            }

            ans = max(ans,right - left + 1);
        }

        return ans;
    }
};