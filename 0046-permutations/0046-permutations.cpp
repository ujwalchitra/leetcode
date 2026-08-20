class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> v;
        int n = nums.size();
        vector<int> vis(n, 0);
        solve(v, ans, nums, vis);
        return ans;
    }
    void solve(vector<int> v, vector<vector<int>>& ans, vector<int>& nums,
               vector<int> vis) {

        if (v.size() == nums.size()) {
            ans.push_back(v);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (vis[i] == 1) {
                continue;
            }
            vis[i] = 1;
            v.push_back(nums[i]);
            solve(v, ans, nums, vis);
            v.pop_back();
            vis[i] = 0;
        }
    }
};