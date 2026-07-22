class Solution {
public:
    int countVowelSubstrings(string word) {

        int n = word.length();
        string s = "aeiou";
        int ans = 0;

        if (n < 5) {
            return 0;
        }
        else {

            for(int len = 5;len <= n;len++) {

                for(int idx = 0;idx <= n-len;idx++) {

                    string str = "";
                    str = word.substr(idx,len);
                    int cnt1 = 0,cnt2 = 0;

                    for(int i=0;i < 5;i++) {

                        if(find(str.begin(),str.end(),s[i]) != str.end()) {

                            cnt1++;
                        }
                    }

                    if(cnt1 == 5) {
                        
                        for(int i=0;i < len;i++) {

                            if(find(s.begin(),s.end(),str[i]) != s.end()) {

                                cnt2++;
                            }
                        }
                    }
                    
                    if(cnt2 == len) {

                        ans++;
                    }
                }
            }
        }

        return ans;
    }
};