class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int i=0;
        vector<vector<int>>ans;
        vector<int>v;
        sort(nums.begin(),nums.end());
        solve(i,v,ans,nums);
        return ans;
    }
    void solve(int i,vector<int>v,vector<vector<int>>&ans,vector<int>& nums){
        if(i==nums.size()){
            ans.push_back(v);
            return;
        }
        v.push_back(nums[i]);
        solve(i+1,v,ans,nums);
        v.pop_back();
        int j=i+1;
        while(j<nums.size()){
            if(nums[j]==nums[i]){
                j++;
            }else{
                break;
            };
        }
        solve(j,v,ans,nums);

    }
};