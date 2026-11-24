class Solution {
public:
    void dfs(int node , vector<int>&vis, vector<vector<int>>& adj){
        vis[node] = 1;
        for(auto i : adj[node]){
            if(vis[i] == -1) dfs(i , vis , adj);
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<vector<int>> adj(isConnected.size());
       for(int i =0; i <isConnected.size(); i++){
        for(int j = 0; j < isConnected.size();j++){
            if(i != j && isConnected[i][j] == 1){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
       }

       vector<int> vis(adj.size() , -1);

       int cnt = 0;
       for(int i = 0;i < vis.size(); i++){
        if(vis[i] == -1) {
            cnt++;
            dfs(i, vis, adj);
        }
       }

       return cnt;

    }
};