class Solution {
public:
    int rob(vector<int>& nums) {
        int i = 0;
        int j = 1;
        if(nums.size()==1){
            return nums[0];
        }
        vector<int> dp(nums.size() + 1, -1);
        vector<int> dpp(nums.size() + 1, -1);
        int a= solve(i, nums, dp);
        int b= dsolve(j, nums, dpp);
        cout<<a<<b;
        return max(a,b);
    }
    int solve(int i, vector<int>& nums, vector<int>& dp) {
        if (i >= nums.size() - 1) {
            return 0;
        }
        if (dp[i] != -1) {
            return dp[i];
        }
        int left = nums[i] + solve(i + 2, nums, dp);
        int right = solve(i + 1, nums, dp);
        dp[i] = max(left, right);
        return dp[i];
    }
    int dsolve(int j, vector<int>& nums, vector<int>& dpp) {
        if (j >= nums.size()) {
            return 0;
        }
        if (dpp[j] != -1) {
            return dpp[j];
        }
        int left = nums[j] + dsolve(j + 2, nums, dpp);
        int right = dsolve(j + 1, nums, dpp);
        dpp[j] = max(left, right);
        return dpp[j];
    }
};