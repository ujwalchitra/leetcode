class Solution {
public:
    bool bfs(int node,int target,vector<vector<int>>& adj,vector<int> &vis){
         vis[node]=1;
         queue<int>q;
         q.push(node);
         while(!q.empty()){
            int a=q.front();
            q.pop();
            vis[a]=1;
            for(auto it:adj[a]){
                if(vis[it]==0){
                q.push(it);
                vis[it]=1;}
            }
         }
         if(vis[target]==1){
            return true;
         }
         return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int> vis(n,0);
        vector<vector<int>> adj(n);
        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        return bfs(source,destination,adj,vis);

    }
};