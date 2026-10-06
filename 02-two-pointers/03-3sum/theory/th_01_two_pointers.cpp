#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    sort(nums.begin(), nums.end());
    int n = nums.size();

    cout << "Mang sau sort: ";
    for (int x : nums) cout << x << " ";
    cout << "\n\n";

    cout << "=== TIM CAC BO 3 (CHUA XU LY TRUNG) ===\n";

    for (int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;
        int target = -nums[i];

        cout << "\nFix i=" << i << " (nums[i]=" << nums[i] << ", can tim 2 so co tong = " << target
             << ")\n";

        while (left < right) {
            int sum = nums[left] + nums[right];
            cout << "  left=" << left << " (" << nums[left] << "), right=" << right << " ("
                 << nums[right] << ") => sum=" << sum;

            if (sum == target) {
                cout << " -> TIM THAY! [" << nums[i] << ", " << nums[left] << ", " << nums[right]
                     << "]\n";
                left++;
                right--;
            } else if (sum < target) {
                cout << " -> sum < target => left++\n";
                left++;
            } else {
                cout << " -> sum > target => right--\n";
                right--;
            }
        }
    }

    return 0;
}