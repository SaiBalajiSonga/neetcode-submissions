class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row_seen[9][9] = {false};
        bool col_seen[9][9] = {false};
        bool box_seen[9][9] = {false};

        for (int r = 0; r < 9; ++r) {
            for (int c = 0; c < 9; ++c) {
               if(board[r][c] == '.') continue;
               int num = board[r][c] - '1';
               int box_idx = (r / 3) * 3 + (c / 3);
               if (row_seen[r][num] || col_seen[c][num] || box_seen[box_idx][num]) {
                    return false;
                }
                row_seen[r][num] = true;
                col_seen[c][num] = true;
                box_seen[box_idx][num] = true;
            }
        }
        return true;
    }
};
