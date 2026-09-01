#include <cctype>
#include <iostream>
#include <string>

bool ispalispal(const std::string& s) {
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
    std::string s1 = "Was it a car or a cat I saw?";
    std::string s2 = "Hello, World!";

    std::cout << s1 << "    -> " << (ispalispal(s1) ? "true\n" : "false\n");
    std::cout << s2 << "    -> " << (ispalispal(s2) ? "true\n" : "false\n");

    return 0;
}