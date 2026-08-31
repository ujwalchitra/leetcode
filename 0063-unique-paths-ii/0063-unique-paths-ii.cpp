class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int i=0;
        int j=0;
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return solve(0,0,n,m,obstacleGrid,dp);
    }
    int solve(int i,int j,int n,int m,vector<vector<int>>& obstacleGrid, vector<vector<int>>&dp){
        if(i<0||j<0||i>=n||j>=m||obstacleGrid[i][j]==1){
            return 0;
        }
        if(i==n-1&&j==m-1){
            return 1;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int a=solve(i+1,j,n,m,obstacleGrid,dp);
        int b=solve(i,j+1,n,m,obstacleGrid,dp);
        dp[i][j]=a+b;
        return dp[i][j];
    }
};