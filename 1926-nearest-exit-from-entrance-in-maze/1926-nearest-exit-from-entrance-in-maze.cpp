class Solution {
public:
    int bfs(int i, int j, int n, int m, vector<vector<char>>& maze,
            vector<vector<int>>& vis, int p, int s) {
        vis[i][j] = 1;
        queue<pair<pair<int, int>, int>> q;
        q.push({{i, j}, 0});
        vector<pair<int, int>> v = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        while (!q.empty()) {
            int x = q.front().first.first;
            int y = q.front().first.second;
            int count = q.front().second;
            q.pop();
            if ((x != p || y != s) &&
                (x - 1 < 0 || y - 1 < 0 || x + 1 >= n || y + 1 >= m)) {

                return count;
            } else {
                for (auto it : v) {
                    int u = x + it.first;
                    int j = y + it.second;
                    if (u >= 0 && j >= 0 && u < n && j < m &&
                        maze[u][j] == '.' && vis[u][j] == 0) {

                        q.push({{u, j}, count + 1});
                        vis[u][j] = 1;
                    }
                }
            }
        }

        return -1;
    }
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int n = maze.size();
        int m = maze[0].size();
        int i = entrance[0];
        int j = entrance[1];
        int p = entrance[0];
        int s = entrance[1];
        vector<vector<int>> vis(n, vector<int>(m, 0));
        return bfs(i, j, n, m, maze, vis, p, s);
    }
};