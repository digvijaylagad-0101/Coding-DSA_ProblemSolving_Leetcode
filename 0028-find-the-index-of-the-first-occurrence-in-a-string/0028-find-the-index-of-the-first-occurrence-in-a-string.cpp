class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int n = haystack.length();
        int len = needle.length();

        for(int i=0;i <= n-len;i++) {

            string str = "";
            str = haystack.substr(i,len);
            
            if(str == needle) 
               
               return i;
        }

        return -1;
    }
};