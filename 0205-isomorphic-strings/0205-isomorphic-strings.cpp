class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        unordered_map<char,vector<int>> umpp1;
        unordered_map<char,vector<int>> umpp2;
        int m = s.length();
        int n = t.length();

        for(int i=0;i < m;i++) {

            umpp1[s[i]].push_back(i);
        }

        for(int i=0;i < n;i++) {

            umpp2[t[i]].push_back(i);
        }

        for(int i=0;i < m;i++) {

            if(umpp1[s[i]] != umpp2[t[i]])
               
               return false;
            
            else 
               
               continue;
        }

        return true;
    }
};