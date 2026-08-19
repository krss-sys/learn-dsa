#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> board = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int rows = board.size();
    int cols = board[0].size();

    std::cout << "=== MA TRAN ===\n";
    for (const auto& row : board) {
        for (const int& val : row) {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }

    std::cout << "\n=== TINH TONG ===\n";

    std::cout << "  tong tung hang\n";
    for (int i = 0; i < rows; i++) {
        int sumHang = 0;
        for (int j = 0; j < cols; j++) {
            sumHang += board[i][j];
        }
        std::cout << "Hang: " << i << ": " << sumHang << "\n";
    }
    std::cout << "\n";

    std::cout << "  tong tung cot\n";
    for (int j = 0; j < cols; j++) {
        int sumCot = 0;
        for (int i = 0; i < rows; i++) {
            sumCot += board[i][j];
        }
        std::cout << "Cot: " << j << ": " << sumCot << "\n";
    }
    std::cout << "\n";

    return 0;
}