class Solution {
public:
    int thirdMax(vector<int>& nums) {

        set<int> s;

        for(int i=0;i < nums.size();i++) {

            s.insert(nums[i]);
        }

        auto it = s.rbegin();

        if(s.size() >= 3) {

            advance(it,2);

            return *(it);
        }
        else
            return *(it);
    }
};