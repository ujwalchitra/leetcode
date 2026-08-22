class Solution {
public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int k = 0;
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int w = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == -1) {
                    w++;
                }
            }
        }
        w = (m * n) - w;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    k = solve(i, j, n, m, vis, grid, w);
                    break;
                }
            }
        }
        return k;
    }
    int solve(int i, int j, int n, int m, vector<vector<int>>& vis,
              vector<vector<int>>& grid, int w) {
        if (i < 0 || j < 0 || i >= n || j >= m || grid[i][j] == -1 ||
            vis[i][j] == 1) {
            return 0;
        }
        vis[i][j] = 1;
        w--;
        if (grid[i][j] == 2) {
            int ans = (w == 0);
            vis[i][j] = 0;
            return ans;
        }
        int a = solve(i - 1, j, n, m, vis, grid, w);
        int b = solve(i + 1, j, n, m, vis, grid, w);
        int c = solve(i, j + 1, n, m, vis, grid, w);
        int d = solve(i, j - 1, n, m, vis, grid, w);
        vis[i][j] = 0;
        return a + b + c + d;
    }
};