class Solution {
public:
    int dk(vector<int>& dp, vector<int>& nums, int n) {
        if (n < 0) {
            return 0;
        }

        if (dp[n] != -1) {
            return dp[n];
        }

        int take = nums[n] + dk(dp, nums, n - 2);
        int skip = dk(dp, nums, n - 1);

        return dp[n] = max(take, skip);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();

        vector<int> dp(n, -1);

        return dk(dp, nums, n - 1);
    }
};