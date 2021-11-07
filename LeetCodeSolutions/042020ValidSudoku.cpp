class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows[9][9] = {0}, cols[9][9] = {0}, blocks[9][9] = {0};
        for(int r = 0; r < 9; r++){  
            for(int c = 0; c < 9; c++){
                if(board[r][c] != '.'){ 
                    int number = board[r][c]-'1', k = r / 3 * 3 + c / 3; 
                    if(rows[r][number]++ || cols[c][number]++ || blocks[k][number]++) return false;
                }
            }
        }
        return true;
    }
};
