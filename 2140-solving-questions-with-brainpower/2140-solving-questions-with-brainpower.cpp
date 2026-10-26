class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        long long n = questions.size();
        long long m = questions[0].size();
        long long i = 0;
        long long j = 1;
        vector<vector<long long>> dp(n, vector<long long>(m, -1));
        return solve(n, m, i, j, questions, dp);
    }
    long long solve(long long n, long long m, long long i, long long j, vector<vector<int>>& questions,
              vector<vector<long long>>& dp) {
        if (i >= n || j >= m) {
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        long long left = questions[i][0] +
                   solve(n, m, i + questions[i][j] + 1, j, questions,dp);
        long long right = solve(n, m, i + 1, j, questions,dp);
        return dp[i][j]=max(left, right);
    }
};