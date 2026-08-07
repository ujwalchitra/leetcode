class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
          int n = mat.size();
        int m = mat[0].size();
        int count = 0;
        vector<vector<int>> ans(n, vector<int>(m, 0));
        vector<vector<int>> vis(n, vector<int>(m, 0));
        vector<pair<int, int>> v = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        queue<pair<pair<int, int>, int>> q;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
     
                 if (mat[i][j] == 0) {
                    q.push({{i, j}, 0});
                    vis[i][j] = 1;
                }
            }
        }
        while(!q.empty()){
            int x=q.front().first.first;
            int y=q.front().first.second;
            count=q.front().second;
            q.pop();
            ans[x][y]=count;
            for(auto it:v){
                int u=x+it.first;
                int j=y+it.second;
                if(u>=0&&j>=0&&u<n&&j<m&&vis[u][j]==0){
                    q.push({{u,j},count+1});
                    vis[u][j]=1;
                }

            }
        }
        return ans;
    }
};