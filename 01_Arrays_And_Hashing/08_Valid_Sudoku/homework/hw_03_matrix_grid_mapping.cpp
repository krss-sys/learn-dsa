#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> grid(9, std::vector<int>(9));
    int num = 0;
    for (int r = 0; r < 9; r++) {
        for (int c = 0; c < 9; c++) {
            grid[r][c] = num++;
        }
    }

    std::cout <<"=== TINH TONG BOX 4 ===\n";
    int box = 4;
    int sum = 0;
    int startRow = (box / 3) * 3;
    int startCol = (box % 3) * 3;
    for (int r = startRow; r < startRow + 3; r++) {
        for (int c = startCol; c < startCol + 3; c++) {
            std::cout << grid[r][c] << " ";
            sum += grid[r][c];
        }
        std::cout << "\n";
    }
    std::cout << "Tong: " << sum << "\n";

    return 0;
}