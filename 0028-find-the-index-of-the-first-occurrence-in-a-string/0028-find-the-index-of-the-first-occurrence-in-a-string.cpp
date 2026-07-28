class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int n = needle.length();

        for(int len = n;len <= n;len++) {

            for(int idx = 0;idx <= haystack.size() - 1;idx++) {

                string str = "";
                str = haystack.substr(idx,len);

                if(needle == str)

                   return idx; 
            }
        }

        return -1;
    }
};