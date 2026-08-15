class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> v;
        
        if(n1 > n2) {

            sort(nums1.begin(),nums1.end());

            for(int i=0;i < n2;i++) {

                if(find(nums1.begin(),nums1.end(),nums2[i]) != nums1.end() && find(v.begin(),v.end(),nums2[i]) == v.end()) {

                    v.push_back(nums2[i]);
                }
            }
        }
        else {

            sort(nums2.begin(),nums2.end());

            for(int i=0;i < n1;i++) {

                if(find(nums2.begin(),nums2.end(),nums1[i]) != nums2.end() && find(v.begin(),v.end(),nums1[i]) == v.end()) {

                    v.push_back(nums1[i]);
                }
            }
        }

        return v;
    }
};