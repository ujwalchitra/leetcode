class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    solve(i, 0, matrix, m, n);
                    dsolve(0, j, matrix, m, n);
                }
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == '-1') {
                        matrix[i][j] = 0; 
                }
            }
        }
    }
    void solve(int i, int j, vector<vector<int>>& matrix, int m, int n) {
        if (j >= n) {
            return;
        }
        if(matrix[i][j]!=0){
        matrix[i][j] = '-1';}
        solve(i, j + 1, matrix, m, n);
    }
    void dsolve(int i, int j, vector<vector<int>>& matrix, int m, int n) {
        if (i >= m ) {
            return;
        }
                if(matrix[i][j]!=0){
        matrix[i][j] = '-1';}
        dsolve(i + 1, j, matrix, m, n);
    }
};