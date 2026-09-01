#include <cctype>
#include <iostream>
#include <string>

bool isPalindrome(std::string s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        while (left < right && !std::isalnum(s[left])) {
            left++;
        }

        while (left < right && !std::isalnum(s[right])) {
            right--;
        }

        if (std::tolower(s[left]) != std::tolower(s[right])) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    std::string s1 = "A man, a plan, a canal: Panama";
    std::string s2 = "race a car";

    std::cout << "  -> " << (isPalindrome(s1) ? "true\n" : "false\n");
    std::cout << "  -> " << (isPalindrome(s2) ? "true\n" : "false\n");

    return 0;
}