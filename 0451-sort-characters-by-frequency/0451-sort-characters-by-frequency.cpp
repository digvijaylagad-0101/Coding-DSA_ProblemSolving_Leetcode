class Solution {
public:
    string frequencySort(string s) {

        priority_queue<pair<int,char>> pq;
        unordered_map<char,int> umpp;
        string ans = "";

        for(char ch : s) {

            umpp[ch]++;
        }

        for(auto it : umpp) {

            pq.push({it.second,it.first});
        }

        while(!pq.empty()) {

            int freq = pq.top().first;
            char ch = pq.top().second;
            pq.pop();

            ans.append(freq,ch);
        }

        return ans;
    }
};