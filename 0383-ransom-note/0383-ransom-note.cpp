class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map<char,int> umpp;
        int cnt = 0;
        int n = ransomNote.size();

        for(char ch : ransomNote) {

            umpp[ch]++;
        }

        for(char ch : ransomNote) {

            if(umpp[ch] <= count(magazine.begin(),magazine.end(),ch)) {

                cnt++;
            }
            else {

                return false;
            }
        }

        return (cnt == n ? true : false);
    }
};