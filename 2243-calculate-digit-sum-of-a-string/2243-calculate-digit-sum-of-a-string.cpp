class Solution {

public:
    string digitSum(string s, int k) {

        string str = s;

        while(str.size() > k) {

            string st = "";
            int n = str.size();

            for(int i=0;i < n;i++) {

                if(i+k < n) {

                    string cpy = str.substr(i,k);
                    int num = 0;
                    for(int j=0;j < k;j++) {

                        num += cpy[j] - '0';
                    }
                    
                    st += to_string(num);
                    i = i+k - 1;
                }
                else {

                    string cpy = str.substr(i,n-i);
                    int num = 0;
                    for(int j=0;j < cpy.size();j++) {

                        num += cpy[j] - '0';
                    }

                    st += to_string(num);
                    i = n;
                }
            }

            str = st;
        }

        return str;
    }
};