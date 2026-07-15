class Solution {
public:
    int a(int n,vector<int>&dp){
        if(n==0||n==1){
            return 1;
        }
        if(dp[n-1]!=-1){
            return dp[n];
        }
        int left=a(n-1,dp);
        int right=a(n-2,dp);
        return dp[n]=left+right;
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);

        return a(n,dp);
    }
};