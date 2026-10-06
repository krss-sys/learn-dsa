#include <chrono>
#include <iostream>
#include <thread>
#include <unordered_map>
#include <unordered_set>
#include <vector>

class SanPham {
   private:
    std::vector<int> result;
    std::unordered_set<int> seen;

   public:
    SanPham() { std::cout << "  Constructor thanh cong\n"; }

    ~SanPham() { std::cout << "Destructor thanh cong\n"; }

    void merge(const std::vector<int>& a, const std::vector<int>& b) {
        for (const int x : a) {
            if (seen.count(x) == 0) {
                result.push_back(x);
                seen.insert(x);
            }
        }

        for (const int x : b) {
            if (seen.count(x) == 0) {
                result.push_back(x);
                seen.insert(x);
            }
        }
    }

    void check(const std::vector<int>& a, std::vector<int>& b) {
        std::unordered_map<int, int> freq;

        for (const int& id : a) freq[id]++;
        for (const int& id : b) freq[id]++;

        std::cout << "=== ID bi trung lap ===\n";
        for (const auto& entry : freq) {
            int id = entry.first;
            int count = entry.second;

            if (count >= 2) {
                std::cout << "  ID " << id << " xuat hien " << count << " lan\n";
            }
        }
    }

    void find(int x) {
        if (seen.find(x) != seen.end()) {
            std::cout << "  FOUND\n";
        } else {
            std::cout << "  NOT FOUND\n";
        }
    }

    void hienThi() {
        for (const int& x : result) {
            std::cout << x << " ";
        }
        std::cout << "\n";
    }
};

int main() {
    SanPham sp;
    std::vector<int> warehouse1 = {101, 203, 105, 407, 203, 502, 101, 608};
    std::vector<int> warehouse2 = {203, 407, 105, 902, 608, 301, 203, 101};

    std::jthread t1(&SanPham::merge, &sp, std::ref(warehouse1), std::ref(warehouse2));
    std::jthread t2(&SanPham::check, &sp, std::ref(warehouse1), std::ref(warehouse2));
    t1.join();
    t2.join();

    std::jthread t4(&SanPham::hienThi, &sp);
    t4.join();

    int x;
    std::cout << "Nhap so can tim: ";
    std::cin >> x;
    std::jthread t3(&SanPham::find, &sp, x);
    t3.join();

    return 0;
}