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

    std::cout << "=== BOX 0 (3x3) ===\n";
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            std::cout << grid[r][c] << " ";
        }
        std::cout << "\n";
    }

    std::cout << "\n=== BOX 8 (3x3) ===\n";
    for (int r = 6; r < 9; r++) {
        for (int c = 6; c < 9; c++) {
            std::cout << grid[r][c] << " ";
        }
        std::cout << "\n";
    }

    std::cout << "\n=== ALL 9 BOXES ===\n";
    for (int box = 0; box < 9; box++) {
        int startRow = (box / 3) * 3;
        int startCol = (box % 3) * 3;
        std::cout << "Box " << box << ": ";
        for (int r = startRow; r < startRow + 3; r++) {
            for (int c = startCol; c < startCol + 3; c++) {
                std::cout << grid[r][c] << " ";
            }
        }
        std::cout << "\n";
    }

    return 0;
}