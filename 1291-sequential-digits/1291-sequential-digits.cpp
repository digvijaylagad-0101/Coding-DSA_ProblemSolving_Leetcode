class Solution {

public:
    vector<int> sequentialDigits(int low,int high) {

        string s = "123456789";
        string out = "";
        vector<int> ans;
        int val = 0;

        for(int len = 2;len <= s.length();len++) {

            for(int i=0;i <= s.length() - len;i++) {

                string out = s.substr(i,len);
                val = stoi(out);

                if(val >= low && val <= high) {

                    ans.push_back(val);
                }
            }
        }

        return ans;
    }
};