class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> v;
        int i = 0;
        sort(candidates.begin(), candidates.end());
        solve(ans, v, candidates, target, i);
        return ans;
    }
    void solve(vector<vector<int>>& ans, vector<int>& v,
               vector<int>& candidates, int target, int i) {
        if (target == 0) {
            ans.push_back(v);
        }
        if (i == candidates.size() || candidates[i] > target) {
            return;
        }

        v.push_back(candidates[i]);
        solve(ans, v, candidates, target - candidates[i], i + 1);
        v.pop_back();
        int j = i + 1;

        while (j < candidates.size() && candidates[j] == candidates[i]) {
            j++;
        }

        solve(ans, v, candidates, target, j);
    }
};