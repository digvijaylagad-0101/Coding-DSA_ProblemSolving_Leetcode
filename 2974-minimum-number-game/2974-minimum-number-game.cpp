class Solution {

public:
    vector<int> numberGame(vector<int>&nums) {

        vector<int> arr;
        sort(nums.begin(),nums.end());
        int i=1;

        while(i < nums.size()) {

            arr.push_back(nums[i]);
            arr.push_back(nums[i-1]);

            i += 2;
        }

        return arr;
    }
};