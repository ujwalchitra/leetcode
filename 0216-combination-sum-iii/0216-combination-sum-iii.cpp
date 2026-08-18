class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> v;
        int i = 1;
        solve(i, ans, v, k, n);
        return ans;
    }
    void solve(int i, vector<vector<int>>& ans, vector<int> v, int k, int n) {

        if (v.size() == k) {
            if (n == 0) {
                ans.push_back(v);
            }
            return;
        }
        if (i > 9 || v.size() > k || n < 0) {
            return;
        }

        v.push_back(i);
        solve(i + 1, ans, v, k, n - i);
        v.pop_back();
        solve(i + 1, ans, v, k, n);
    }
};