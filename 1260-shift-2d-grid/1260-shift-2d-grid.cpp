class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int a;
        while(k--){
            a = grid[0][0];
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    int b = grid[i][j];
                    grid[i][j] = a;
                    a = b;
                }
            }
            grid[0][0] = a;
        }
        return grid;
    }
};