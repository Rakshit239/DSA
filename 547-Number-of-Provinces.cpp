class Solution {
public:
    void dfs(vector<vector<int>> &adj,int u,vector<bool> &vis){
        // if(vis[u]) return;
        vis[u]=true;
        for(int v =0;v<adj[u].size();v++){
            if(adj[u][v]==1 && !vis[v]){
                dfs(adj,v,vis);
            }
        }
        
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<bool> vis(isConnected.size(),false);
        int count=0;
        for(int i=0;i<isConnected.size();i++){
            if(!vis[i]){
                count++;
                dfs(isConnected,i,vis);
            }
        }
        return count;
    }
};