class Solution {
public:
    int dfs(vector<vector<int>>& vis, vector<vector<int>>& grid, int n, int m,
            int& ans, int i, int j) {
        if (i < 0 || j < 0 || i >= n || j >= m || grid[i][j] == 0 ||
            vis[i][j] == 1) {
            return 0;
        }
        vis[i][j] = 1;
        ans = ans + 4;
        if (i - 1 >= 0 && grid[i-1][j] == 1) {
            ans = ans - 1;
            dfs(vis, grid, n, m, ans, i - 1, j);
        }
        if (i + 1 <n && grid[i+1][j] == 1) {
            ans = ans - 1;
            dfs(vis, grid, n, m, ans, i +1, j);
        }
        if (j -1>=0 &&  grid[i][j-1] == 1) {
            ans = ans - 1;
            dfs(vis, grid, n, m, ans, i , j-1);
        }
        if (j+1 < m &&  grid[i][j+1] == 1) {
            ans = ans - 1;
            dfs(vis, grid, n, m, ans, i , j+1);
        }
        return ans;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        int k = 0;
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    k = dfs(vis, grid, n, m, ans, i, j);
                    return k;
                }
            }
        }
        return k;
    }
};