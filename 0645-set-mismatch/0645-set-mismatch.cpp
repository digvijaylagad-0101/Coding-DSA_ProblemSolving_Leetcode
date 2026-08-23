class Solution {

public:
    vector<int> findErrorNums(vector<int>&nums) {

        int n = nums.size();
        unordered_map<int,int> umpp;
        vector<int> v;

        int actualSum = n*(n + 1) / 2;

        for(int it : nums) {

            umpp[it]++;
            if(umpp[it] == 2) {

                v.push_back(it);
                break;
            }
        }

        int sum = 0;
        for(int i=0;i < n;i++) {

            sum += nums[i];
        }

        int resultSum = sum - v[0];

        int result = actualSum - resultSum;
        v.push_back(result);

        return v;
    }
};