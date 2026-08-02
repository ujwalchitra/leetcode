class Solution {
public:
    void dfs(vector < vector<int>> & vis, vector<vector<int>>& image, int n,
             int m, int i, int j, int c,int k) {
        if (i < 0 || j < 0 || i >= n || j >= m ||image[i][j]!=k||vis[i][j]==1){
            return;
        }
        vis[i][j] = 1;
        image[i][j] = c;
        dfs(vis, image, n, m, i, j+1, c,k);
        dfs(vis, image, n, m, i, j-1, c,k);
        dfs(vis, image, n, m, i-1, j, c,k);
        dfs(vis, image, n, m, i+1, j, c,k);
        

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        int n = image.size();
        int m = image[0].size();
        int k=image[sr][sc];
        vector<vector<int>> vis(n, vector<int>(m, 0));
        dfs(vis, image, n, m, sr, sc, color,k);
        return image;
    }
};