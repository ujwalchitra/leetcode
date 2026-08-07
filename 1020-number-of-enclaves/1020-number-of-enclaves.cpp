class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        vector<pair<int, int>> v = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
        queue<pair<int, int>> q;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if ((vis[i][j] == 0 && grid[i][j] == 1) &&
                    (i - 1 < 0 || j - 1 < 0 || i + 1 >= n || j + 1 >= m)) {
                    q.push({i, j});
                    vis[i][j] = 1;
                }
            }
        }
        while (!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            for (auto it : v) {
                int u = x + it.first;
                int j = y + it.second;
                if (u >= 0 && j >= 0 && u < n && j < m && vis[u][j] == 0 &&
                    grid[u][j] == 1) {
                    q.push({u, j});
                    vis[u][j] = 1;
                }
            }
        }
        int count=0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1 && vis[i][j] == 0) {
                     count++;
                }
            }
        }
        return count;
    }
};