#include <algorithm>
#include <iostream>
#include <string>

int characterReplacement(const std::string& s, int k) {
    int count[26] = {0};
    int left = 0, maxCount = 0, max_len = 0;

    for (int right = 0; right < s.length(); right++) {
        count[s[right] - 'A']++;
        maxCount = std::max(maxCount, count[s[right] - 'A']);
        if ((right - left + 1) - maxCount > k) {
            count[s[left] - 'A'];
            left++;
        }
        max_len = std::max(max_len, right - left + 1);
    }
    return max_len;
}

int main() {
    std::string s = "AAABABB";
    int k = 1;
    std::cout << "Max length: " << characterReplacement(s, k) << "\n";

    return 0;
}