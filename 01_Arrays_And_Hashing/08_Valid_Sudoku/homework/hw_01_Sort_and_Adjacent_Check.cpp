#include <iostream>
#include <vector>
#include <unordered_set>

bool containsduplicate(std::vector<int>& nums) {
    std::unordered_set<int> seen;
    for (int num : nums) {
        if (!seen.insert(num).second) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<int> nums = {4, 2, 1, 3, 6, 5};

    if (containsduplicate(nums)) {
        std::cout << "Trung\n";
    } else {
        std::cout << "Khong\n";
    }

    return 0;
}