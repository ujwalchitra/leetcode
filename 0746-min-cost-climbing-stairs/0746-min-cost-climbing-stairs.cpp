class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int i = 0;
        int j = 1;
        vector<int>dp(cost.size(),-1);
        vector<int>dpp(cost.size(),-1);
        return min(solve(i, cost,dp), polve(j, cost,dpp));
    }
    int solve(int i, vector<int>& cost,vector<int>&dp) {
        if (i >= cost.size()) {
            return 0;
        }
        if (dp[i] != -1) {
            return dp[i];
        }
        int a = cost[i] + solve(i + 1, cost,dp);
        int b = cost[i] + solve(i + 2, cost,dp);
        dp[i] = min(a, b);
        return dp[i];
    }
    int polve(int i, vector<int>& cost,vector<int>&dpp) {
        if (i >= cost.size()) {
            return 0;
        }
        if (dpp[i] != -1) {
            return dpp[i];
        }
        int a = cost[i] + solve(i + 1, cost,dpp);
        int b = cost[i] + solve(i + 2, cost,dpp);
        dpp[i] = min(a, b);
        return dpp[i];
    }
};