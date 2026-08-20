class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int count=0;
        int i=0;
        solve(nums,target,i,count);
        return count;
    }
    void solve(vector<int>& nums, int target,int i,int &count){
        if(i==nums.size()){
           if(target==0){
               count++;
               return;
           }
           return;
        }
        solve(nums,target-nums[i],i+1,count);
        solve(nums,target+nums[i],i+1,count);
    }
};