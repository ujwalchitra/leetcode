class Solution {
public:
    void dfs(vector<vector<int>>& vis, vector<vector<int>>& grid, int n, int m,
             int i, int j, int& k) {

        if (i < 0 || j < 0 || i >= n || j >= m || grid[i][j] == 0 ||
            vis[i][j] == 1) {
            return;
        }
        vis[i][j] = 1;
        k++;

        dfs(vis, grid, n, m, i, j - 1, k);
        dfs(vis, grid, n, m, i, j + 1, k);
        dfs(vis, grid, n, m, i - 1, j, k);
        dfs(vis, grid, n, m, i + 1, j, k);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int k = 0;
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (vis[i][j] == 0 && grid[i][j] == 1) {
                    k = 0;
                    dfs(vis, grid, n, m, i, j, k);
                    count = max(count, k);
                }
            }
        }
        return count;
    }
};