#include <iostream>
#include <unordered_set>
#include <vector>

bool containsduplicate(std::vector<int>& nums) {
    std::unordered_set<int> seen;
    for (int num : nums) {
        if (seen.find(num) != seen.end()) {
            return true;
        }
        seen.insert(num);
    }
    return false;
}

int main() {
    std::vector<int> nums = {4, 2, 1, 3, 2, 5};

    if (containsduplicate(nums)) {
        std::cout << "Co trung\n";
    } else {
        std::cout << "Khong turng\n";
    }

    return 0;
}