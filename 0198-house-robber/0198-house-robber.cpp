class Solution {
public:
    int rob(vector<int>& nums) {
        int i=0;
        vector<int>dp(nums.size()+1,-1);
        return solve(i,nums,dp);
    }
    int solve(int i,vector<int>& nums,vector<int>&dp){
        if(i>=nums.size()){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int left=nums[i]+solve(i+2,nums,dp);
        int right=solve(i+1,nums,dp);
        dp[i]=max(right,left);
        return dp[i];
    }
};