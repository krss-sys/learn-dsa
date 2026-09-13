#include <algorithm>
#include <iostream>
#include <vector>

int maxArea(std::vector<int>& height) {
    int left = 0;
    int right = height.size() - 1;
    int max_area = 0;
    while (left < right) {
        int h = std::min(height[left], height[right]);
        int w = right - left;
        int area = h * w;

        max_area = std::max(max_area, area);

        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }
    return max_area;
}

int main() {
    std::vector<int> height = {1, 7, 2, 5, 4, 7, 3, 6};
    std::cout << "Max area " << maxArea(height) << "\n";
    return 0;
}