class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        queue<pair<int, int>> q;
        int n = matrix.size();
        int m = matrix[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    q.push({i, j});
                }
            }
        }
        while (!q.empty()) {
            int i = q.front().first;
            int j = q.front().second;
            q.pop();
            for (int a = 0; a < n; a++) {
                matrix[a][j] = 0;
            }
            for (int a = 0; a < m; a++) {

                matrix[i][a] = 0;
            }
        }
    }
};