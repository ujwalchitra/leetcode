class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
    for (int i = 0; i < 9; i++) {
            set<char> s;
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') {
                    continue;
                }
                if (s.find(board[i][j]) != s.end()) {
                    return false;
                } else {
                    s.insert(board[i][j]);
                }
            }
        }
        for (int i = 0; i < 9; i++) {
            set<char> s;
            for (int j = 0; j < 9; j++) {
                if (board[j][i] == '.') {
                    continue;
                }
                else if (s.find(board[j][i]) != s.end()) {
                    return false;
                } else {
                    s.insert(board[j][i]);
                }
            }
        }
        for (int i = 0; i < 9; i = i + 3) {
            int k = i + 3;
            for (int j = 0; j < 9; j = j + 3) {
                int r = j + 3;
                if (solve(i, k, j, r, board) == false) {
                    return false;
                }
            }
        }
        return true;
    }
    bool solve(int i, int k, int j, int r, vector<vector<char>>& board) {
        set<char> s;
        for (int a = i; a < k; a++) {
            for (int b = j; b < r; b++) {
                if (board[a][b] == '.') {
                    continue;
                }
                if ( s.find(board[a][b]) != s.end()) {
                    return false;
                }
                s.insert(board[a][b]);
            }
        }
        return true;
    }
};