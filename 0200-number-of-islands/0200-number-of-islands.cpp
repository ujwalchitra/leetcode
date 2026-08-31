class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'&&vis[i][j]==0){
                    count++;
                    solve(i,j,n,m,vis,grid);
                }
            }
        }
        return count;
    }
    void solve(int i,int j,int n,int m,vector<vector<int>>&vis,vector<vector<char>>& grid){
        if(i<0||j<0||i>=n||j>=m||vis[i][j]==1||grid[i][j]=='0'){
            return;
        }
        vis[i][j]=1;
        solve(i+1,j,n,m,vis,grid);
        solve(i-1,j,n,m,vis,grid);
        solve(i,j+1,n,m,vis,grid);
        solve(i,j-1,n,m,vis,grid);
    }
};