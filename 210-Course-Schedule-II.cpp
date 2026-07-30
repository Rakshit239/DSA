class Solution {
public:
    vector<int> findOrder(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V);
        for(auto &it:edges){
            int u = it[0];
            int v = it[1];
            adj[v].push_back(u);
        }
        vector<int> indeg(V,0);
        for(int u=0;u<V;u++){
            for(auto &v:adj[u]){
                indeg[v]++;
            }
        }
        vector<int> ans;
        queue<int> q;
        for(int i=0;i<V;i++){
            if(indeg[i]==0){
                q.push(i);
                ans.push_back(i);
            }
        }
        while(!q.empty()){
            int i = q.front();
            q.pop();
            for(auto &v:adj[i]){
                indeg[v]--;
                if(indeg[v]==0){
                    q.push(v);
                    ans.push_back(v);
                }
            }
        }
        if(ans.size()!=V) return{};
        return ans;
    }
};