class Solution {
public:
    bool wordPattern(string pattern, string s) {

        int n1 = pattern.length(), n2 = s.length(), cnt = 0;
        unordered_map<char,vector<int>> mp1;
        unordered_map<string,vector<int>> mp2;
        string str = "";

        for(int i=0;i < n1;i++) {

            mp1[pattern[i]].push_back(i);
        }

        for(int i=0;i < n2;i++) {

            if(s[i] == ' ') {

                if(str != "") {

                    mp2[str].push_back(cnt);
                    cnt++;
                    str = "";
                }
            }
            else {

                str += s[i];
            }
        }
        
        if(str != "") {

            mp2[str].push_back(cnt);
        }

        if(n1 != cnt+1)
           return false;
        
        for(auto it1 = mp1.begin();it1 != mp1.end();it1++) {
            
            bool flag = false;

            for(auto it2 = mp2.begin();it2 != mp2.end();it2++) {

                if(it1->second == it2->second) {

                    flag = true;
                    break;
                }
            }

            if(!flag)
               return false;
        }

        return true;
    }
};