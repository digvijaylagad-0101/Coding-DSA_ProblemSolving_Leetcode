class Solution {
public:
    vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int n1 = nums1.size();
        int idx = 0;
        int cnt = 0;

        for(int i=0;i < n1;i++) {

            if(nums1[i] == 0) {

                cnt++;
            }
        }

        if(cnt >= n) {

            for(int i=0;i < n1;i++) {

            if(nums1[i] == 0 && idx < n) {

                nums1[i] += nums2[idx];
                idx++;
            }
          }
        }

        sort(nums1.begin(),nums1.end());

        return nums1;
    }
};