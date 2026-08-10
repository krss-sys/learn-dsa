#include <iostream>
#include <string>
using namespace std;

// Ham encode: them do dai vao truoc
string encode(string data) { return to_string(data.length()) + data; }

// Ham decode: Lay so o dau, cat lay du lieu;
string decode(string encoded) {
    int len = stoi(encoded);                  // Lay so o dau
    int numDigits = to_string(len).length();  // Dem chu so
    return encoded.substr(numDigits, len);
}

int main() {
    string original = "Hello";
    string encoded = encode(original);
    string decoded = decode(encoded);

    cout << "=== TEST 1: Encode -> Decode ===" << endl;
    cout << "Original: " << original << "\n";
    cout << "Encoded: " << encoded << "\n";
    cout << "Decoded: " << decoded << "\n";
    cout << "Decoded == Original? " << (decoded == original ? "YES" : "NO") << "\n";
    cout << "\n";

    string a = "Hi";
    string b = "Hello";
    string encA = encode(a);
    string encB = encode(b);

    cout << "=== TEST 2: 2 Chuoi khac nhau ===\n";
    cout << "encode(\"Hi\") = " << encA << "\n";
    cout << "encode(\"Hello\") = " << encB << "\n";
    cout << "2 ket qua khac nhau? " << (encA != encB ? "YES -> 1:1" : "NO -> LOI") << "\n";

    return 0;
}