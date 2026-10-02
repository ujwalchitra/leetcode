class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n=100000;
        vector<int>v(n,0);
        for(int i=0;i<nums.size();i++){
            v[nums[i]]+=nums[i];

        }
        vector<int>dp(v.size()+1,-1);
        int i=0;
        return solve(v,i,dp);
        
    }
    int solve( vector<int>&v,int i,vector<int>&dp){
        if(i>=v.size()){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int take=v[i]+solve(v,i+2,dp);
        int give=solve(v,i+1,dp);
        dp[i]=max(take,give);
        return dp[i];
    }
};