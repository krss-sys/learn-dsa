#include <iostream>
#include <vector>

bool isValidSudoku(std::vector<std::vector<char>>& board) {
    bool rows[9][9] = {false};
    bool cols[9][9] = {false};
    bool boxes[9][9] = {false};

    for (int r = 0; r < 9; r++) {
        for (int c = 0; c < 9; c++) {
            char ch = board[r][c];
            if (ch == '.') {
                continue;
            }
            int num =  ch - '1';
            int boxIdx = (r / 3) * 3 + (c / 3);

            if (rows[r][num] || cols[c][num] || boxes[boxIdx][num]) {
                return false;
            }

            rows[r][num] = true;
            cols[c][num] = true;
            boxes[boxIdx][num] = true;
        }
    }
    return true;
}

int main() {
    std::vector<std::vector<char>> board = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'1','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };
    
    if (isValidSudoku(board)) {
        std::cout << "Valid sudoku\n";
    } else {
        std::cout << "Invalid sudoku\n";
    }

    return 0;
}