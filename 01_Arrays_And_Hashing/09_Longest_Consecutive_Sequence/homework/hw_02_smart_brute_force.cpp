#include <vector>
#include <iostream>
#include <unordered_set>

class SmartBruteForce {
private:
    std::unordered_set<int> seen;
    std::vector<std::vector<int>> result;

public:
    SmartBruteForce() {
        std::cout << "\nConstructor thanh cong\n";
    }

    ~SmartBruteForce() {
        std::cout << "\nDestructor thanh cong\n";
    }

    int longestConsecutive(std::vector<int>& nums) {
        
    }
};