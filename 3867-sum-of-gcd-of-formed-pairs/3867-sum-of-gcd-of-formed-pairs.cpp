class Solution {
public:
    long long gcdSum(vector<int>& nums) {

        int n = nums.size();
        vector<int> prefixGCD;
        int val = 0,gcdV = 0;

        for(int i=0;i < n;i++) {

            val = max(val,nums[i]);
            gcdV = gcd(val,nums[i]);

            prefixGCD.push_back(gcdV);
        }

        sort(prefixGCD.begin(),prefixGCD.end());

        int i = 0;
        int j = n-1;
        long long sum = 0;

        while(i < j) {

            sum += gcd(prefixGCD[i],prefixGCD[j]);

            i++;
            j--;
        }

        return sum;
    }
};