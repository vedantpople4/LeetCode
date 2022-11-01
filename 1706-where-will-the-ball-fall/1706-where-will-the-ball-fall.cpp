class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<int> ans;
        for(int col=0;col<n;col++){
            int ccol = col;
            for(int crow=0;crow<m;crow++){
                int ncol = ccol+grid[crow][ccol];
                if(ncol<0 || ncol>=n || grid[crow][ccol]^grid[crow][ncol]){
                    ccol = -1;
                break;
                }
            ccol = ncol;
        }
        ans.push_back(ccol);
        }
        return ans;
    }
};