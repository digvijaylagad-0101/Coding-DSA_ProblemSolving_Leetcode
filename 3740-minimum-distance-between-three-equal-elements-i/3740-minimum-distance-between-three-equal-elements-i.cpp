class Solution {
public:
    int minimumDistance(vector<int>& nums) {

        int n = nums.size();
        unordered_map<int,vector<int>> mpp;
        int val3 = INT_MAX;

        for(int i=0;i < n;i++) {

            mpp[nums[i]].push_back(i);
        }

        for(auto it : mpp) {

            int size = it.second.size();

            if(size >= 3) {

                for(int i=0;i <= size-3;i++) {

                    int val = 0;

                    val += abs(it.second[i] - it.second[i+1]);
                    val += abs(it.second[i] - it.second[i+2]);
                    val += abs(it.second[i+1] - it.second[i+2]);

                    val3 = min(val3,val);
                }
            }
        }

        return (val3 == INT_MAX ? -1 : val3);
    }
};