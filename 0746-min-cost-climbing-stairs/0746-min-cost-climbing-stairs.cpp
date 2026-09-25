class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int i=0;
        int j=1;
            vector<int>dp(cost.size()+1,-1);
       int a= solve(i,cost,dp);
       int b= solve(j,cost,dp);
   

        return min(a,b);
    }
    int solve(int i,vector<int>& cost,vector<int>&dp){
        if(i>=cost.size()){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int left=cost[i]+solve(i+1,cost,dp);
        int right=cost[i]+solve(i+2,cost,dp);
        dp[i]= min(left,right);
        return dp[i];
    }
};