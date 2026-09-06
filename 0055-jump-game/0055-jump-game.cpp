class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i = 0;
        vector<int>dp(nums.size()+1,-1);
        return solve(i, nums,dp);
    }

    bool solve(int i, vector<int>& nums,vector<int>&dp) {
        if (i == nums.size() - 1) {
            return true;
        }
        if (i >= nums.size() || nums[i] == 0) {
            return false;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int j = nums[i];
        for (int jump = 1; jump <= j; jump++) {

            if (solve(i + jump, nums,dp)) {
                return dp[i]=true;
            }
        }
      return dp[i]=false;

    }
};