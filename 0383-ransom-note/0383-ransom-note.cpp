class Solution {

public:
    bool canConstruct(string ransomNote,string magazine) {

        vector<int> v(26,0);

        for(char ch : magazine) {

            v[ch - 'a']++;
        }

        for(char sh : ransomNote) {

            v[sh - 'a']--;

            if(v[sh - 'a'] < 0)
               
               return false;
        }

        return true;
    }
};