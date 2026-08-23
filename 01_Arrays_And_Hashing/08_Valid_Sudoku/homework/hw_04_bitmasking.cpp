#include <iostream>
#include <vector>

bool isValidSudoku(const std::vector<std::vector<int>>& board) {
    bool rows[9][9] = {false};
    bool cols[9][9] = {false};
    bool boxes[9][9] = {false};

    for (int r = 0; r < 9; r++) {
        for (int c = 0; c < 9; c++) {
            int ch = board[r][c];
            int num = ch - 1;
            int boxIdx = (r / 3) * 3 + (c / 3);

            if (rows[r][num] || cols[c][num] || boxes[boxIdx][num]) {
                std::cout << "So " << num + 1 << " bi trung\n";
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
    std::vector<std::vector<int>> grid = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9},
        {4, 5, 6, 7, 8, 9, 1, 2, 3},
        {7, 8, 9, 1, 2, 3, 4, 5, 6},
        {2, 3, 4, 5, 6, 7, 8, 9, 1},
        {5, 6, 7, 8, 9, 1, 2, 3, 4},
        {8, 9, 1, 2, 3, 4, 5, 6, 7},
        {3, 4, 5, 6, 7, 8, 9, 1, 2},
        {6, 7, 8, 9, 1, 2, 3, 4, 5},
        {9, 1, 2, 3, 4, 5, 6, 7, 8}
    };
    
    if (isValidSudoku(grid)) {
        std::cout << "Dung\n";
    } else {
        std::cout << "Sai\n";
    }

    return 0;
}