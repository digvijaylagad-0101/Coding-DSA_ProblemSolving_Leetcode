class Solution {

public:
    bool isGood(vector<int>&nums) {

        int n = nums.size();
        map<int,int> mpp;

        for(auto it : nums) {

            mpp[it]++;
        }
        
        int n2 = mpp.size();
        int cnt = 0,cnt2 = 0,cnt3 = 0;

        for(auto it : mpp) {

            cnt++;
            if(it.first != cnt)
                return false;

            if(it.second == 1 && cnt != n2) {

                cnt2++;
            }
            else if(it.second == 2 && cnt == n2) {

                cnt3++;
            }
            else {

                return false;
            }
        }

        if(cnt2 == n2-1 && cnt3 == 1)
           return true;
        else 
           return false;
    }
};