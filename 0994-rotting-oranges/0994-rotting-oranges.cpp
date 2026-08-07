class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<pair<int, int>> v = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        vector<vector<int>> vis(n, vector<int>(m, 0));
        queue<pair<pair<int, int>, int>> q;
        int count=0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 2) {
                    q.push({{i, j}, 0});
                    vis[i][j] = 1;
                }
            }
        }
        while (!q.empty()) {
            int x = q.front().first.first;
            int y = q.front().first.second;
            count = q.front().second;
            q.pop();
            for (auto it : v) {
                int u = x + it.first;
                int j = y + it.second;
                if (u >= 0 && j >= 0 && u < n && j < m && vis[u][j] == 0 &&
                    grid[u][j] == 1) {
                    q.push({{u, j}, count + 1});
                    vis[u][j] = 1;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1 &&vis[i][j]==0) {
                    return -1;
                }
            }
        }
        return count;
    }

}
;