class Solution {
public:
    int uniquePaths(int m, int n) {
        int i = 0;
        int j = 0;
        vector<vector<long long>> dp(m + 1, vector<long long>(n + 1, -1));
        return solve(i, j, m, n, dp);
    }
    int solve(int i, int j, int m, int n, vector<vector<long long>>& dp) {
        if (i > m - 1 || j > n - 1) {
            return 0;
        }

        if (i == m - 1 && j == n - 1) {
            return 1;
        }
        if (dp[i][j] != -1) {
            return dp[i][j];
        }
        int left = solve(i + 1, j, m, n, dp);
        int right = solve(i, j + 1, m, n, dp);
        dp[i][j]=left+right;
        return dp[i][j];
       
    }
};