class Solution {

public:
    bool isAnagram(string s,string t) {

        if(s.length() != t.length())
            return false;
        
        unordered_map<char,int> umpp;

        for(char ch : s) {

            umpp[ch]++;
        }

        for(char ch : t) {

            if(!umpp.count(ch))
               return false;
            
            umpp[ch]--;

            if(umpp[ch] == 0)  
               
               umpp.erase(ch);
        }

        return umpp.empty();
    }
};