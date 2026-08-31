class Solution {
public:
    int rob(vector<int>& nums) {
        int i = 0;
        if(nums.size()==1){
            return nums[0];
        }
        vector<int> dp(nums.size() + 1, -1);
         vector<int> dpp(nums.size() + 1, -1);
         return max(solve(0, nums, dp),dolve(1, nums, dpp));
         
    }
    int solve(int i, vector<int>& nums, vector<int>& dp) {
        if (i >= nums.size()-1) {
            return 0;
        }
            if(dp[i]!=-1){
                return dp[i];
            }
            int a = nums[i] + solve(i + 2, nums, dp);
            int b = solve(i + 1, nums, dp);
            dp[i]= max(a, b);
            cout<<dp[i];
            return dp[i];
    }
     int dolve(int i, vector<int>& nums, vector<int>& dpp) {
        if (i >= nums.size()) {
            return 0;
        }
            if(dpp[i]!=-1){
                return dpp[i];
            }
            int a = nums[i] + dolve(i + 2, nums, dpp);
            int b = dolve(i + 1, nums, dpp);
            dpp[i]= max(a, b);
    
            return dpp[i];
    }
};