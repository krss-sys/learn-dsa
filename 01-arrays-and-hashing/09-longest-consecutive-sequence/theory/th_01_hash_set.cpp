#include <iostream>
#include <unordered_set>
#include <vector>

int main() {
    //=== 1. Khoi tao ===
    std::unordered_set<int> seen;

    //=== 2. Insert ===
    seen.insert(10);
    seen.insert(20);
    seen.insert(30);
    seen.insert(20);
    std::cout << "Size: " << seen.size() << "\n";

    //=== 3. Find ===
    if (seen.find(99) == seen.end()) {
        std::cout << "Khong tim thay 99\n";
    }

    //=== 4. Count ===
    std::cout << "Count 20: " << seen.count(20) << "\n";
    std::cout << "Count 99: " << seen.count(99) << "\n";

    //=== 5. Erase ===
    seen.erase(20);
    std::cout << "Sau khi xoa 20, size: " << seen.size() << "\n";

    //=== 6. Duyet ===
    std::cout << "Cac phan tu trong set: ";
    for (const int x : seen) {
        std::cout << x << " ";
    }
    std::cout << "\n";

    //=== 7. Khoi tao tu vector ===
    std::vector<int> nums = {1, 2, 3, 2, 4, 3, 5};
    std::unordered_set<int> unique(nums.begin(), nums.end());

    std::cout << "Vector: ";
    for (const int x : nums) {
        std::cout << x << " ";
    }
    std::cout << "\n";

    std::cout << "Unique: ";
    for (const int x : unique) {
        std::cout << x << " ";
    }
    std::cout << "\n";

    return 0;
}