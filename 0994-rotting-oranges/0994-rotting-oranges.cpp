class Solution {
public:
    void add(int r , int c , vector<vector<int>>& grid , vector<vector<int>>& vis, queue<pair<int,int>>& q){
        if(!(r >= 0 && c >= 0 && r < grid.size() && c < grid[0].size())) return;
        if(!(grid[r][c] == 1 && vis[r][c] != 1)) return;
        q.push({r, c});
        grid[r][c] = 2;
        vis[r][c] = 1;
    }
    bool check(vector<vector<int>> grid){
        for(int i =0;i < grid.size(); i++){
            for(int j = 0;j < grid[0].size(); j++){
                if(grid[i][j] == 1) return 1;
            }
        }
        return 0;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        vector<vector<int>> vis(grid.size(), vector<int>(grid[0].size() , 0));
        queue<pair<int,int>> q;
        for(int i =0;i < grid.size(); i++){
            for(int j = 0;j < grid[0].size(); j++){
                if(grid[i][j] == 2 && vis[i][j] != 1){
                    q.push({i, j});
                    vis[i][j] = 1;
                }
            }
        }
        if(q.empty() && !check(grid)) return 0;
        int cnt = q.size();
        int ans = 0;
        int x = 0;
        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;
            add(r - 1, c , grid , vis , q);
            add(r + 1 , c, grid , vis , q);
            add(r , c - 1, grid , vis , q);
            add(r , c + 1, grid , vis , q);
            q.pop();
            x++;
            if(x == cnt) {
                ans++;
                cnt = q.size();
                x = 0;
            }
        }
        if(check(grid)) return -1;
        return ans - 1;
    }
};