#include <cctype>
#include <iostream>
#include <string>

int main() {
    std::cout << "=== LOC CHUOI ===\n";
    std::string t = "Hello, World! 123 @#$";
    std::string result = "";
    for (const char& ch : t) {
        if (std::isalnum(ch)) {
            result += ch;
        }
    }
    std::cout << result << "\n";

    std::cout << "\n=== SO SANH 2 CHUOI ===\n";
    std::string str1 = "Hello";
    std::string str2 = "hEoLo";
    bool equal = true;
    for (int i = 0; i < str1.size(); i++) {
        if ((char)tolower(str1[i]) != (char)tolower(str2[i])) {
            equal = false;
            break;
        }
    }
    if (equal) {
        std::cout << "Giong nhau\n";
    } else {
        std::cout << "Khac nhau\n";
    }

    return 0;
}