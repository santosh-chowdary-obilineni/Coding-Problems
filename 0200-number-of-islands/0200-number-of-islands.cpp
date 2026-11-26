class Solution {
public:
    void dfs(int r, int c, vector<vector<int>>& vis, vector<vector<char>>& grid){
        if(!(r >= 0 && c >= 0 && r < grid.size() && c < grid[0].size())) return;
        if(!(vis[r][c] != 1 && grid[r][c] == '1')) return;
        vis[r][c] = 1;
        dfs(r , c - 1 , vis, grid);
        dfs(r , c + 1 , vis, grid);
        dfs(r - 1 , c , vis, grid);
        dfs(r + 1 , c , vis, grid);
    }


    int numIslands(vector<vector<char>>& grid) {
        vector<vector<int>> vis(grid.size(), vector<int>(grid[0].size() , 0));
        int ans =0 ;
        for(int i = 0;i < grid.size(); i++){
            for(int j =0;j < grid[0].size(); j++){
                if(grid[i][j] == '1' && vis[i][j] == 0){
                    ans++;
                    dfs(i , j, vis, grid);
                }
            }
        }
        return ans;
    }
};