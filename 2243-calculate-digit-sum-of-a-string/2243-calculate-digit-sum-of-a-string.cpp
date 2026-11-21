
class Solution {

public:
    string digitSum(string s, int k) {

        string str = s;

        while(str.size() > k) {
            
            string st = "";

            for(int i = 0; i < str.size(); i++) {

                if(i + k <= str.size()) {

                    string cpy = str.substr(i, k);
                    int num = 0;

                    for(int j = 0; j < cpy.size(); j++) {
                        num += cpy[j] - '0';
                    }

                    st += to_string(num);
                    i = i + k - 1;
                }
                else {

                    string cpy1 = str.substr(i, str.size() - i);
                    int val = 0;

                    for(int j = 0; j < cpy1.size(); j++) {
                        val += cpy1[j] - '0';
                    }

                    st += to_string(val);
                    i = str.size();
                }
            }

            str = st;
        }

        return str;
    }
};
