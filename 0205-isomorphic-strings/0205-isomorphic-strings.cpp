class Solution {

public:
    bool isIsomorphic(string s,string t) {
        
        if(s.length() != t.length())
            return false;

        unordered_map<char,vector<int>> umpp1;
        unordered_map<char,vector<int>> umpp2;

        for(int i=0;i < s.length();i++) {

            umpp1[s[i]].push_back(i);
        }

        for(int i=0;i < t.length();i++) {

            umpp2[t[i]].push_back(i);
        }

        for(int i=0;i < umpp1.size();i++) {

            if(umpp1[s[i]] == umpp2[t[i]]) {

                continue;
            }
            else {

                return false;
            }
        }

        return true;
    }
};