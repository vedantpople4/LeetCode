class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> ans(matrix[0].size(),vector<int>(matrix.size(),0));
        for(long long i=0;i<matrix.size();i++){
            for(long long j=0;j<matrix[0].size();j++){
                ans[j][i] = matrix[i][j];
            }
        }
        return ans;
    }
};