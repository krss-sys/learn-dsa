#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();

    // Buoc 1: tao prefix array
    vector<int> prefix(n);
    prefix[0] = 1;  // Khong co so nao truoc index 0
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }

    // Buoc 2: tao suffix array
    vector<int> suffix(n);
    suffix[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }

    // Buoc 3: Ket hop
    vector<int> result(n);
    for (int i = 0; i < n; i++) {
        result[i] = prefix[i] * suffix[i];
    }

    return result;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = productExceptSelf(nums);

    cout << "Inpit: ";
    for (const int& x : nums) cout << x << ", ";
    cout << "\n";

    cout << "Output: ";
    for (const int& x : result) cout << x << ", ";
    cout << "\n";

    return 0;
}