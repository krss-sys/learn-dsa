#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {-1, 0, 1, 2, -1, -4};
    std::sort(nums.begin(), nums.end());
    int n = nums.size();

    std::cout << "Mang sau sort: ";
    for (const int& x : nums) std::cout << x << ", ";
    std::cout << "\n";

    for (int i = 0; i < n - 2; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) {
            std::cout << "Bo qua i = " << i << " (nums[i] = " << nums[i]
                      << " trung voi nums[i - 1])\n";
            continue;
        }
        int left = i + 1;
        int right = n - 1;
        int target = -nums[i];

        while (left < right) {
            int sum = nums[left] + nums[right];

            if (sum == target) {
                std::cout << "TIM DUOC: [" << nums[i] << ", " << nums[left] << ", " << nums[right]
                          << "]\n";
                while (left < right && nums[left] == nums[left + 1]) left++;
                while (left < right && nums[right] == nums[right - 1]) right--;
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