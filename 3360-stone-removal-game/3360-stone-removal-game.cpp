class Solution {

public:
    bool canAliceWin(int n) {

        if(n < 10) 
           return false;
        
        int turn = 1;
        int val1 = n - 10;
        int val2 = 9;

        while(n > 0) {

            if(val1 - val2 >= 0) {

                turn++;
                val1 -= val2;
                val2--;
                n = val1;
            }
            else {

                break;
            }
        }

        if(turn % 2 != 0)
           return true;
        else
           return false; 
    }
};