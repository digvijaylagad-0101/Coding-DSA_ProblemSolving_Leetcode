class Solution {

public:
    bool isAnagram(string s,string t) {

        if(s.length() != t.length())
            return false;
        
        unordered_map<char,int> umpp;

        for(char ch : s) {

            umpp[ch]++;
        }

        for(char it : t) {

            if(!umpp.count(it))
                return false;
            
            umpp[it]--;

            if(umpp[it] == 0) {

                umpp.erase(it);
            }
        }

        return umpp.empty();
    }
};