class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> sum;
        vector<int> v;
        int i = 0;
        solve(i, target, candidates, v, sum);
        return sum;
    }
    void solve(int i, int target, vector<int>& candidates, vector<int>v,
               vector<vector<int>>& sum) {
        if (target == 0) {
            sum.push_back(v);
            return;
        }
        if (i == candidates.size()) {
            return;
        }
        if(candidates[i]<=target){
        v.push_back(candidates[i]);
        solve(i, target - candidates[i], candidates, v, sum);
        v.pop_back();}
        solve(i + 1, target, candidates, v, sum);
    }
};