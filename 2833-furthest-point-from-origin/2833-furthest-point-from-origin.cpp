class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {

        int n = moves.size();
        int cntL = 0,cntR = 0;
        int val = 0;

        for(int i=0;i < n;i++) {

            if(moves[i] == 'L') {

                cntL++;
            }
            else if(moves[i] == 'R') {

                cntR++;
            }
            else {

                continue;
            }
        }

        if(cntL >= cntR) {

            for(int i=0;i < n;i++) {

                if(moves[i] == 'L' || moves[i] == '_') {

                    val += 1;
                }
                else {

                    val -= 1;
                }
            }
        }
        else {

            for(int i=0;i < n;i++) {

                if(moves[i] == 'R' || moves[i] == '_') {

                    val += 1;
                }
                else {

                    val -= 1;
                }
            }
        }

        return val;
    }
};