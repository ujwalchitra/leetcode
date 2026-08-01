class Solution {
public:
    bool dfs(int node,int target,vector<vector<int>>& adj,vector<int> &vis){
         vis[node]=1;
         for(auto it:adj[node]){
            if(vis[it]==0 ){
                dfs(it,target,adj,vis);
            }
         }
         if(vis[target]==1){
            return true;
         }else{
            return false;
         }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int> vis(n,0);
        vector<vector<int>> adj(n);
        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        return dfs(source,destination,adj,vis);

    }
};