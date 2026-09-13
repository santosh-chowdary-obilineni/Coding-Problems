void oper1(vector<vector<int>>& grid , int val , int i){
    int row = i;
    int n = val;
    int size = grid.size();
    while(n--){
        for(int i = 0;i < size - 1; i++){
            int temp = grid[row][i];
            grid[row][i] = grid[row][i + 1];
            grid[row][i + 1] = temp;
        }
    }
}


void oper2(vector<vector<int>>& grid, int val , int i){
    int col = i;
    int n = val;
    int size = grid.size();
    while(n--){
        for(int i = 0;i < size - 1; i++){
            int temp = grid[i][col];
            grid[i][col] = grid[i + 1][col];
            grid[i + 1][col] = temp;
        }
    }
}




class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        for(int i = 0; i < rowShift.size(); i++) oper1(grid , rowShift[i] , i);
        for(int i = 0; i < colShift.size(); i++) oper2(grid , colShift[i] , i);
        return grid;
    }
};