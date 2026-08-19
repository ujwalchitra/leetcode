class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        int k = 0;
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == word[0]) {
                    if (solve(n, m, i, j, word, vis, board, k) == true) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
    bool solve(int n, int m, int i, int j, string word,
               vector<vector<int>>& vis, vector<vector<char>>& board, int k) {
        if (i < 0 || j < 0 || i >= n || j >= m || k >= word.size() ||
            vis[i][j] == 1) {
            return false;
        }

        if (board[i][j] != word[k]) {
            return false;
        }
        if(k==word.size()-1){
            return true;
        }
        vis[i][j]=1;
        bool a = solve(n, m, i + 1, j, word, vis, board, k + 1);

        bool b = solve(n, m, i - 1, j, word, vis, board, k + 1);

        bool c = solve(n, m, i, j + 1, word, vis, board, k + 1);

        bool d = solve(n, m, i, j - 1, word, vis, board, k + 1);
         vis[i][j] = 0;
        return a || b || c || d;
    }
};