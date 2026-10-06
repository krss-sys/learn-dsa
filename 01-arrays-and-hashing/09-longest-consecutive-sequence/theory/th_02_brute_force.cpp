#include <iostream>
#include <unordered_set>
#include <vector>

int longestConsecutive(std::vector<int>& nums) {
    if (nums.empty()) {
        return 0;
    }

    // Buoc 1: Bo vector vao set de tim O(1)
    std::unordered_set<int> s(nums.begin(), nums.end());
    int best = 0;

    // Buoc 2: Duyet tung so
    for (const int& x : nums) {
        // Chi xu li khi x la dau cua day
        if (s.find(x - 1) == s.end()) {
            int y = x;
            int count = 0;

            // DEm cac so lien tiep
            while (s.find(y) != s.end()) {
                count++;
                y++;
            }
            best = std::max(best, count);
        }
    }
    return best;
}

int main() {
    std::vector<int> nums = {100, 4, 200, 1, 3, 2};
    std::cout << longestConsecutive(nums) << "\n";

    return 0;
}