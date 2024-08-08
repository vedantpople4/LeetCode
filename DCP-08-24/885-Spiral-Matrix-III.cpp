class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> dr = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        int step = 1;
        vector<vector<int>> ans;
        int dir = 0;
        while(ans.size() < rows*cols){
            for(int i=0;i<=1;i++){
                for(int j=0;j<step;j++){
                    if(rStart>=0 && rStart<rows && cStart >= 0 && cStart<cols){
                        ans.push_back({rStart, cStart});
                    }
                    rStart += dr[dir][0];
                    cStart += dr[dir][1];
                }
                dir = (dir+1)%4;
            }
            step++;
        }
        return ans;
    }
};