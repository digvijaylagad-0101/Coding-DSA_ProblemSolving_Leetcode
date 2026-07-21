class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {

        int m = grid.size();
        int n = grid[0].size();

        vector<int> val;
        vector<vector<int>> ans(m, vector<int>(n));

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                val.push_back(grid[i][j]);
            }
        }

        int size = val.size();
        k %= size;   // Important

        for(int i = 0; i < size - k; i++) {
            val.push_back(val[i]);
        }

        val.erase(val.begin(), val.begin() + (size - k));

        int idx = 0;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                ans[i][j] = val[idx++];
            }
        }

        return ans;
    }
};