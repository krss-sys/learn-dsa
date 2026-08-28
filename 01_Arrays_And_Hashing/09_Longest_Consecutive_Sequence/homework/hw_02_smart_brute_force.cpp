#include <algorithm>
#include <iostream>
#include <unordered_set>
#include <vector>

class SmartBruteForce {
   private:
    std::vector<std::vector<int>> result;
    std::unordered_set<int> seen;

   public:
    SmartBruteForce() { std::cout << "      Da constructor thanh cong\n"; }

    ~SmartBruteForce() { std::cout << "     Da destructor thanh cong\n"; }

    void longestConsecutive(const std::vector<int>& nums) {
        if (nums.empty()) {
            return;
        }
        seen.insert(nums.begin(), nums.end());
        int best = 0;
        std::vector<int> longestSeq;
        for (const int x : seen) {
            if (seen.find(x - 1) == seen.end()) {
                std::vector<int> temp;
                int y = x;
                int count = 0;
                while (seen.find(y) != seen.end()) {
                    count++;
                    temp.push_back(y);
                    y++;
                }
                if (count > best) {
                    best = count;
                    longestSeq = temp;
                }
            }
        }
        std::cout << "Chuoi dai nhat: ";
        for (const int num : longestSeq) {
            std::cout << num << " ";
        }
        std::cout << "\n";

        std::cout << "Co do dai dai nhat la: " << best << "\n";
    }
};

int main() {
    SmartBruteForce arr;
    std::vector<int> nums = {100, 4, 200, 1, 3, 2, 5, 10, 205, 12, 13, 14, 201, 202, 203, 204, 206};
    arr.longestConsecutive(nums);

    return 0;
}