class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        
        int n = candyType.size();
        int number = n/2;
        unordered_set<int> s;

        for(int i=0;i < n;i++) {

            s.insert(candyType[i]);
        }

        int total = s.size();

        if(number >= total)
           return total;
        else
           return number;
    }
};