class Solution {
public:
    int maximum69Number (int num) {
        
        vector<int> ele;
        int x = num;

        while(x != 0) {

            int rem = x % 10;
            ele.push_back(rem);
            x /= 10;
        }

        for(int i = ele.size()-1;i >= 0;i--) {

            if(ele[i] == 6) {

                ele.erase(ele.begin()+i,ele.begin()+i+1);
                ele.insert(ele.begin()+i,9);
                break;
            }
        }
        
        int val = 0;

        for(int i = ele.size()-1;i >= 0;i--) {

            val = val*10 + ele[i];
        }

        return val;
    }
};