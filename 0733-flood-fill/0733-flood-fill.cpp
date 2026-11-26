class Solution {
public:
    void dfs(int r, int c , vector<vector<int>>& vis, vector<vector<int>>& mat,int val, int color){
        if(!(r >= 0 && c >= 0 && r < mat.size() && c < mat[0].size())) return;
        if(!(vis[r][c] != 1 && mat[r][c] == val))  return;
        mat[r][c] = color;
        vis[r][c] = 1;
        dfs(r, c-1, vis, mat, val, color);
        dfs(r, c + 1, vis, mat, val , color);
        dfs(r - 1, c, vis, mat , val ,color);
        dfs(r + 1, c , vis, mat , val ,color);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> vec(image.size() , vector<int>(image[0].size() , 0));
        int val = image[sr][sc];
        dfs(sr, sc, vec, image,val , color);
        return image;
    }
};