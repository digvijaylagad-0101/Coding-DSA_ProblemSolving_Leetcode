class Solution {

public:
    vector<int> sequentialDigits(int low,int high) {

        string s = "123456789";
        vector<int> ans;
        int val = 0;
        string out = "";

        for(int len = 2;len <= s.length();len++) {

            for(int idx = 0;idx <= s.length() - len;idx++) {

                out = s.substr(idx,len);
                val = stoi(out);

                if(low <= val && high >= val) {

                    ans.push_back(val);
                }
            }
        }

        return ans;
    }
};