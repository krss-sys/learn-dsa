#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_set>

int lengthOfLongestSubstring(std::string s) {
    std::unordered_set<char> window;
    int left = 0, max_len = 0;
    for (int right = 0; right < s.length(); right++) {
        while (window.count(s[right])) {
            window.erase(s[left]);
            left++;
        }
        window.insert(s[right]);
        max_len = std::max(max_len, right - left + 1);
    }
    return max_len;
}

int main() {
    std::string s = "zxyzxyz";
    std::cout << "Max length: " << lengthOfLongestSubstring(s) << "\n";
    return 0;
}