class Solution {
public:
    int countNeighbors(const vector<vector<int>>& board, int r, int c) {
        bool up = r > 0;
        bool down = r < board.size() - 1;
        bool left = c > 0;
        bool right = c < board[0].size() - 1;
        int count = 0;
        
        if (up) {
            count += board[r - 1][c] & 1;
            if (left) {
                count += board[r - 1][c - 1] & 1;
            }
            if (right) {
                count += board[r - 1][c + 1] & 1;
            }
        }
        if (down) {
            count += board[r + 1][c] & 1;
            if (left) {
                count += board[r + 1][c - 1] & 1;
            }
            if (right) {
                count += board[r + 1][c + 1] & 1;
            }
        }
        if (left) {
            count += board[r][c - 1] & 1;
        }
        if (right) {
            count += board[r][c + 1] & 1;
        }
        return count;
    }
    void gameOfLife(vector<vector<int>>& board) {
        for (int i = 0; i < board.size(); i += 1) {
            for (int j = 0; j < board[0].size(); j += 1) {
                int living_neighbors = countNeighbors(board, i, j);
                if (board[i][j] == 1 && (living_neighbors == 2 || living_neighbors == 3)) {
                    board[i][j] += 2;
                } else if (board[i][j] == 0 && living_neighbors == 3) {
                    board[i][j] += 2;
                }
            }
        }
        for (int i = 0; i < board.size(); i += 1) {
            for (int j = 0; j < board[0].size(); j += 1) {
                if (board[i][j] & 2) {
                    board[i][j] = 1;
                } else {
                    board[i][j] = 0;
                }
            }
        }
    }
};