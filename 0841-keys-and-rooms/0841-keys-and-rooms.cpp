class Solution {
public:

    void dfs( vector<bool> &vis,vector<vector<int>>& rooms,int node){
        vis[node]=true;
        for(auto it:rooms[node]){
            if(vis[it]!=true){
                dfs(vis,rooms,it);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int v=rooms.size();
        int start=0;
        vector<bool> vis(v,false);
        dfs(vis,rooms,start);
        for(auto i:vis){
            if(i==false){
                return false;
                break;
            }
        }
        return true;
    }
};