class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {

        int n = words.size();
        string ans = "";

        for(int i=0;i < n;i++) {
            
            int val = 0;
            for(char ch : words[i]) {

                int pos = ch - 'a';
                val += weights[pos];
            }
            int rem = val % 26;
            ans += ('z' - rem);
        }

        return ans;
    }
};