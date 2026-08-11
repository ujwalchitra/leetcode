class Solution {
public:
    int dpp(vector<int>& dp, int n) {
        if (n == 0) {
            return 1;
        }
        if (n == 1) {
            return 1;
        }
        if (dp[n] != -1) {
            return dp[n];
        }
        int left = dpp(dp, n - 1);
        int right = dpp(dp, n - 2);
        dp[n]=left+right;
        return dp[n];
    }
    int climbStairs(int n) {
        vector<int> dp(n + 1, -1);
        return dpp(dp, n);
    }
};