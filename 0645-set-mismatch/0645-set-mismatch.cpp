class Solution {

public:
    vector<int> findErrorNums(vector<int>&nums) {

        int n = nums.size();
        unordered_map<int,int> umpp;
        vector<int> v;

        int actualSum = n*(n+1) / 2;

        for(int it : nums) {

            umpp[it]++;

            if(umpp[it] == 2) {

                v.push_back(it);
                break;
            }
        }

        int arraySum = 0;

        for(int i=0;i < n;i++) {

            arraySum += nums[i];
        }

        // sum after 1 occurance of all ele. from array
        int resultSum = arraySum - v[0];
        //missing number
        int miss = actualSum - resultSum;
        v.push_back(miss);

        return v;
    }
};