class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {

        int count = 0;
        int n = -1;
        vector<int> v;

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                v.push_back(grid[i][j]);
            }
        }

        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++) {
            cout << v[i];
        }
        int m = v[(v.size() - 1) / 2];
    
        for (int i = 0; i < v.size(); i++) {
            if (abs(v[i] - m) % x != 0) {
                return -1;
                break;
            }
            count = count + abs(v[i] - m) / x;
        }
        return count;
    }
};