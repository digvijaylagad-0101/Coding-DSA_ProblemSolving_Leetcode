class Solution {
public:
    bool validDigit(int n, int x) {
        
        string num = to_string(n);
        char ch = '0' + x;

        if(find(num.begin(),num.end(),ch) != num.end() && num[0] != ch) 
           return true;
        else
           return false;
    }
};