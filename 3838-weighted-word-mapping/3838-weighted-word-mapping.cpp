class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {

        int n = words.size();
        int cnt = 0;
        string s = "";
        map<char,int>mpp;

        for(char ch = 'z';ch >= 'a';ch--) {

            mpp[ch] = cnt;
            cnt++;
        }

        for(int i=0;i < n;i++) {

            int len = words[i].length();
            int val = 0;
            for(int j=0;j < len;j++) {

                int pos = words[i][j] - 'a';
                val += weights[pos];
            }
            int rem = val % 26;
            
            for(auto it : mpp) {

                if(it.second == rem) {

                    s.push_back(it.first);
                    break;
                }
            }
        }

        return s;
    }
};