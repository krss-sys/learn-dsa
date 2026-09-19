#include <iostream>
#include <vector>
#include <algorithm>

int trap(std::vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int leftMax = 0, rightMax = 0;
    int total = 0;

    while (left < right) {
        if (height[left] <= height[right]) {
            leftMax = std::max(leftMax, height[left]);
            total += leftMax - height[left];
            left++;
        } else {
            rightMax = std::max(rightMax, height[right]);
            total += rightMax - height[right];
            right--;
        }
    }
    return total;
}

int main() {
    std::vector<int> height = {0, 2, 0, 3, 1, 0, 1, 3, 2, 1};
    std::cout << "Total water: " << trap(height) << "\n";
    return 0;
}