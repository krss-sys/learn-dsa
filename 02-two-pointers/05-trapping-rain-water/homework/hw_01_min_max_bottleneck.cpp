#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> height = {4, 2, 0, 3, 2, 5};
    int n = height.size();

    std::vector<int> maxLeft(n);
    maxLeft[0] = height[0];
    for (int i = 1; i < n; i++) {
        maxLeft[i] = std::max(maxLeft[i - 1], height[i]);
    }

    std::vector<int> maxRight(n);
    maxRight[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        maxRight[i] = std::max(maxRight[i + 1], height[i]);
    }

    int total = 0;
    for (int i = 0; i < n; i++) {
        total += std::min(maxLeft[i], maxRight[i]) - height[i];
    }
    std::cout << "Total: " << total << "\n";

    return 0;
}