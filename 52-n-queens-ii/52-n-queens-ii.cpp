class Solution {
private:
    int N, ans;
    bool board[9][9] = {0};
    bool isValid(int row, int col){
        for(int i=0;i<row;i++) if(board[i][col]) return 0;
        for(int i=row-1, j=col-1;i>=0 && j>=0;i--,j--) if(board[i][j]) return 0;
        for(int i=row-1, j=col+1;i>=0 && j<N;i--, j++) if(board[i][j]) return 0;
        return 1;
    }
    void nQueen(int row){
        if(row==N){
            ans++;
            return;
        }
        for(int i=0;i<N;i++){
            if(isValid(row,i)){
                board[row][i]=1;
                nQueen(row+1);
                board[row][i] = 0;
            }
        }
    }
public:
    int totalNQueens(int n) {
        N=n, ans = 0;
        nQueen(0);
        return ans;
    }
};