class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for (size_t i = 0; i < 9; i++)
        {
            unordered_set<char> hash_row, hash_col, hash_box;
            for (size_t j = 0; j < 9; j++)
            {
                if (board[i][j] != '.')
                {
                    if (hash_row.count(board[i][j]))
                    {
                        return false;
                    }
                    hash_row.insert(board[i][j]);
                }
                if (board[j][i] != '.')
                {
                    if (hash_col.count(board[j][i]))
                    {
                        return false;
                    }
                    hash_col.insert(board[j][i]);
                }
                int row = 3 * (i / 3) + j / 3;
                int col = 3 * (i % 3) + j % 3;
                if (board[row][col] != '.')
                {
                    if (hash_box.count(board[row][col]))
                {
                    return false;
                }
                hash_box.insert(board[row][col]);
                }
            }
        }
        return true;
    }
};
