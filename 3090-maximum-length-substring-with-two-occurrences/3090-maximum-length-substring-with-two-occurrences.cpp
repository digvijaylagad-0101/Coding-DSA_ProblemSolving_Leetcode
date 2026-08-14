class Solution {

public:
    int maximumLengthSubstring(string s) {

        int n = s.length();
        int left = 0;
        int ans = 0;
        unordered_map<char,int> umpp;

        for(int right = 0;right < n;right++) {

            umpp[s[right]]++;

            while(umpp[s[right]] > 2) {

                umpp[s[left]]--;
                left++;
            }

            ans = max(ans,right - left + 1);
        }

        return ans;
    }
};