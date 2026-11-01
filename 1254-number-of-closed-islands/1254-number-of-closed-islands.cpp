class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        vector<vector<int>> vis(n, vector<int>(m, -1));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (vis[i][j]==-1&&grid[i][j]==0) {
                
                   if( solve(i, j,n,m, vis, grid)!=false){
                    count++;
                   };
                }
            }
        }
        return count;
    }
    bool solve(int i, int j, int n, int m, vector<vector<int>>& vis,
               vector<vector<int>>& grid) {
        if (i >= n || j >= m ||i<0||j<0) {
            return false;
        }
        if(grid[i][j]==1||vis[i][j]==0){
            return true;
        }
        

        vis[i][j] = 0;
        
        bool a=solve(i+1, j,n,m, vis, grid);
        bool b=solve(i-1, j,n,m, vis, grid);
        bool c=solve(i, j-1,n,m, vis, grid);
        bool d=solve(i, j+1,n,m, vis, grid);
        return a&&b&&c&&d;
    }
};