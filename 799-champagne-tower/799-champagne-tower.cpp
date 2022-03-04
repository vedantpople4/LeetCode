class Solution {
public:
    double champagneTower(int poured, int row, int glass) {
        vector<vector<double>> tower(101, vector<double>(101));
        tower[0][0] = poured;
        for(int i=0;i<100;i++){
            for(int j=0;j<=i;j++){
                if(tower[i][j]>=1){
                    tower[i+1][j] += (tower[i][j]-1) / 2.0;
                    tower[i+1][j+1] += (tower[i][j]-1) / 2.0;
                    tower[i][j] = 1;
                }
            }
        }
        return tower[row][glass];
    }
};

