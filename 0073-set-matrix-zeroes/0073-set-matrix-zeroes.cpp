class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<pair<int, int>> v;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    v.push_back({i, j});
                }
            }
        }
        for (auto p : v) {
            solve(p.first, 0, matrix, m, n);
            dsolve(0, p.second, matrix, m, n);
        }
    }
    void solve(int i, int j, vector<vector<int>>& matrix, int m, int n) {
        if (i >= m || j >= n) {
            return;
        }
        matrix[i][j] = 0;
        solve(i, j + 1, matrix, m, n);
    }
    void dsolve(int i, int j, vector<vector<int>>& matrix, int m, int n) {
        if (i >= m || j >= n) {
            return;
        }
        matrix[i][j] = 0;
        dsolve(i + 1, j, matrix, m, n);
    }
};