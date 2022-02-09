class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int a = grid.size();
        int b = grid[0].size();
        int dp[a][b];
        dp[0][0] = grid[0][0];
        int sum = grid[0][0];
        for(int i=1;i<b;i++){
            dp[0][i] = sum + grid[0][i];
            sum+=grid[0][i];
        }
        sum = grid[0][0];
        for(int i=1;i<a;i++){
            dp[i][0] = sum + grid[i][0];
            sum += grid[i][0];
        }
        for(int i=1;i<a;i++){
            for(int j=1;j<b;j++){
                dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j];
            }
        }
        return dp[a-1][b-1];
    }
};