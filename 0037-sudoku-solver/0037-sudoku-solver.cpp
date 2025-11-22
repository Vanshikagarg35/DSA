class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) { find(0, 0, board); }

    bool find(int i, int j, vector<vector<char>>& board) {

        if (i == 9)
            return true;

        if (j == 9)
            return find(i + 1, 0, board);

        if (board[i][j] != '.')
            return find(i, j + 1, board);

        for (int num = 1; num <= 9; num++) {
            if (check(num, board, i, j)) {
                board[i][j] = '0' + num;

                if (find(i, j + 1, board)) {
                    return true;
                }

                board[i][j] = '.';
            }
        }

        return false;
    }

    bool check(int num, vector<vector<char>>& board, int i, int j) {
        char c = '0' + num;

        for (int col = 0; col < 9; col++) {
            if (board[i][col] == c)
                return false;
        }

        for (int row = 0; row < 9; row++) {
            if (board[row][j] == c)
                return false;
        }

        int startRow = (i / 3) * 3;
        int startCol = (j / 3) * 3;
        for (int a = 0; a < 3; a++) {
            for (int b = 0; b < 3; b++) {
                if (board[startRow + a][startCol + b] == c)
                    return false;
            }
        }

        return true;
    }
};