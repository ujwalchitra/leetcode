class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++){
            sort(grid[i].begin(),grid[i].end());
        }
        int ans=0;
        for(int i=0;i<grid[0].size();i++){
            int sum=INT_MIN;
            for(int j=0;j<grid.size();j++){
                sum=max(sum,grid[j][i]);
            }
            ans=ans+sum;
        }
        return ans;
    }
};