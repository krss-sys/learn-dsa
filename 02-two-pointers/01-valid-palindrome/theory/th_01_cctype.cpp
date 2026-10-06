#include <cctype>
#include <iostream>
#include <string>

int main() {
    std::cout << "=== isalnum ===\n";
    std::cout << std::isalnum('a') << "\n";
    std::cout << std::isalnum('Z') << "\n";
    std::cout << std::isalnum('5') << "\n";
    std::cout << std::isalnum(' ') << "\n";
    std::cout << std::isalnum('!') << "\n";

    std::cout << "\n=== tolower ===\n";
    std::cout << (char)tolower('A') << "\n";
    std::cout << (char)tolower('Z') << "\n";
    std::cout << (char)tolower('a') << "\n";

    std::string text = "Hello, World! 123";
    std::string filtered = "";
    for (const char& c : text) {
        if (std::isalnum(c)) {
            filtered += c;
        }
    }
    std::cout << "Filtered: " << filtered << "\n";

    std::string a = "Hello";
    std::string b = "hello";
    bool equal = true;

    for (int i = 0; i < a.size(); i++) {
        if (tolower(a[i]) != tolower(b[i])) {
            equal = false;
            break;
        }
    }
    std::cout << "equal: " << equal << "\n";

    return 0;
}