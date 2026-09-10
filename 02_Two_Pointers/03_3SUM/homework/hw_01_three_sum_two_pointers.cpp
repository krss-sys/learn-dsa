#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {-2, -1, 0, 1, 2, 3};
    std::sort(nums.begin(), nums.end());
    int n = nums.size();

    std::cout << "Mang sau khi sap xep: ";
    for (const int& x : nums) std::cout << x << " ";
    std::cout << "\n";

    for (int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;
        int target = -nums[i];
        while (left < right) {
            int sum = nums[left] + nums[right];
            if (sum == target) {
                std::cout << "TIM DUOC: " << nums[i] << ", " << nums[left] << ", " << nums[right]
                          << "\n";
                left++;
                right--;
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
    }
    return 0;
}