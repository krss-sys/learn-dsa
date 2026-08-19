#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> board = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int rows = board.size();
    int cols = board[0].size();

    std::cout << "=== MA TRAN ===\n";
    for (const auto& row : board) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }

    std::cout << "\n=== TIM TARGET ===\n";
    int target = 5;
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            if (board[r][c] == target) {
                std::cout << "Tim thay target tai (" << r << ", " << c << ")\n";
            }
        }
    }

    std::cout << "\n=== TONG DUONG CHEO ===\n";
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        sum += board[i][i];
    }
    std::cout << "Tong: " << sum << "\n";

    return 0;
}