class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int n = nums.size();
        vector<int> ans;

        //left half
        int l = 0;
        int r = n-1;
        int valMin = -1;

        while(l <= r) {

            int mid = l + (r-l)/2;

            if(nums[mid] == target) {

                valMin = mid;
                r = mid-1;
            }
            else if(nums[mid] > target) {

                r = mid-1;
            }
            else {

                l = mid+1;
            }
        }

        ans.push_back(valMin);

        //right half
        l = 0;
        r = n-1;
        int valMax = -1;

        while(l <= r) {

            int mid = l + (r-l)/2;

            if(nums[mid] == target) {

                valMax = mid;
                l = mid+1;
            }
            else if(nums[mid] > target) {

                r = mid-1;
            }
            else {

                l = mid+1;
            }
        }

        ans.push_back(valMax);

        return ans;
    }
};