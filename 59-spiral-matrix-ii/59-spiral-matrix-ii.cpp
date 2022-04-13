class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n));
        int beg = 0, end = n-1, temp = -1, ptr = 1;
        while(end>beg){
            temp = beg;
            while(temp<end){
                ans[beg][temp++] = ptr++;
            }
            temp = beg;
            while(temp<end){
                ans[temp++][end] = ptr++;
            }
            temp = end;
            while(temp>beg){
                ans[end][temp--] = ptr++;
            }
            temp = end;
            while(temp>beg){
                ans[temp--][beg] = ptr++;
            }
            beg++;
            end--;
        }
        if(beg==end) ans[beg][end] = ptr;
        return ans;
    }
};