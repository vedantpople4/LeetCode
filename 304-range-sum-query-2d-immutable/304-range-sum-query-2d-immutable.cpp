class NumMatrix {
public:
    vector<vector<int>> ans;
    NumMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        ans.resize(m+1, vector<int>(n+1));
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                ans[i][j] = ans[i-1][j] + ans[i][j-1] - ans[i-1][j-1] + matrix[i-1][j-1];
            }
        }
    }
    int sumRegion(int row1, int col1, int row2, int col2) {
        row2++;
        col2++;
        return ans[row2][col2] - ans[row2][col1] - ans[row1][col2] + ans[row1][col1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */