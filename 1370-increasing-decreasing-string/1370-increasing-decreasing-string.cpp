class Solution {
public:
    string sortString(string s) {
        
        int len = s.length();
        map<char,int> umpp;
        string ans = "";

        for(char it : s) {

            umpp[it]++;
        }
        
        int i = 0;
        while(i < len) {

            for(auto it : umpp) {

                if(it.second != 0) {

                    ans += it.first;
                    umpp[it.first]--;
                    i++;
                }
            }

            string other = "";

            if(i != len) {

                for(auto it : umpp) {

                    if(it.second != 0) {

                        other += it.first;
                        umpp[it.first]--;
                        i++;
                    }
                }
            }
            reverse(other.begin(),other.end());
            ans += other;
        }

        return ans;
    }
};