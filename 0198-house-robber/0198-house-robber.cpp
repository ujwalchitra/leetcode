class Solution {
public:
    int rob(vector<int>& nums) {
        int i=0;
        vector<int>dp(nums.size(),-1);
        return solve(i,dp,nums);
    }
    int solve(int i, vector<int>&dp,vector<int>& nums){
        if(i>=nums.size()){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];       
        }
        int a=nums[i]+solve(i+2,dp,nums);
        int b=solve(i+1,dp,nums);
        dp[i]=max(a,b);
        return dp[i];
    }
};