#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>

int lengthOfLongestSubstring(const std::string s) {
    if (s.empty()) {
        return 0;
    }
    std::unordered_map<char, int> lastIndex;
    int left = 0, max_len = 0;

    for (int right = 0; right < s.length(); right++) {
        if (lastIndex.count(s[right]) && lastIndex[s[right]] >= left) {
            left = lastIndex[s[right]] + 1;
        }
        lastIndex[s[right]] = right;
        max_len = std::max(max_len, right - left + 1);
    }
    return max_len;
}

int main() {
    std::string s = "abcabcbb";
    std::cout << "Max length: " << lengthOfLongestSubstring(s) << "\n";
    return 0;
}