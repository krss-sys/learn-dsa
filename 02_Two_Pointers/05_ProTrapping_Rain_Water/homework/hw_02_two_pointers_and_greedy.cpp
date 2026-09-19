#include <algorithm>
#include <iostream>
#include <vector>

int trap(const std::vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int maxLeft = 0, maxRight = 0;
    int total = 0;

    while (left < right) {
        if (height[left] < height[right]) {
            maxLeft = std::max(maxLeft, height[left]);
            total += maxLeft - height[left];
            left++;
        } else {
            maxRight = std::max(maxRight, height[right]);
            total += maxRight - height[right];
            right--;
        }
    }
    return total;
}

int main() {
    std::vector<int> height = {4, 2, 0, 3, 2, 5};
    std::cout << "Total: " << trap(height) << "\n";
    return 0;
}