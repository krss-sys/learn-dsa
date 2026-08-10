#include <iostream>
#include <string>
using namespace std;

string encode(string data) {
    return to_string(data.size()) + data;
}

string decode(string encoded) {
    int len  = stoi(encoded);
    int numDigits = to_string(len).length();
    return encoded.substr(numDigits, len);
}

int main() {
    cout << "=== TEST decode ===\n";
    string ori1 = "Hi";
    string ori2 = "Hello";
    string ori3 = "Hey";
    
    cout << "Original: " << ori1 << ", " << ori2 << ", " << ori3 << "\n";
    cout << "Encoded: " << encode(ori1) << ", " << encode(ori2) << ", " << encode(ori3) << "\n";
    cout << "Decoded: " << decode(encode(ori1)) << ", " << decode(encode(ori2)) << ", " << decode(encode(ori3)) << "\n";

    return 0;
}