class Solution {
public:
   void dfs(int node,vector<int>&vis,vector<vector<int>>& graph,vector<vector<int>>&ans,vector<int>level){
        int a=0;
        vis[node]=1;
       level.push_back(node);
       if(node==graph.size()-1){
        ans.push_back(level);
        level.clear();
       }
       for(auto it:graph[node]){
            dfs(it,vis,graph,ans,level);
       }


    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
      int v=graph.size();
      vector<int>vis(v,0);
      vector<vector<int>>ans;
      int node=0;
       vector<int>level;
      dfs(node,vis,graph,ans,level);  
      return ans;
    }
};