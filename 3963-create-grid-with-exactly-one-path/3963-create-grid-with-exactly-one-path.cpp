class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<vector<char>> s(m, vector<char>(n, '#'));

        vector<string> k;
        for (int i = 0; i < n; i++) {
            s[0][i] = '.';
        }
        for (int i = 0; i < m; i++) {
            s[i][n-1] = '.';
        }

        string ans="";
        for(int i=0;i<m;i++){
            string ans="";
            for(int j=0;j<n;j++){
                ans+=s[i][j];
            }
            k.push_back(ans);
        }
        return k;
    }
};