#include <iostream>
#include <string>
using namespace std;

int main() {
    string data = "DSA";

    //===== Ma Hoa =====//
    string encoded = to_string(data.length()) + data;
    cout << "Encoded: " << encoded << "\n";

    //===== Giai Ma =====//
    int len = stoi(encoded);                          // 3
    int numDigits = to_string(len).length();          // 1
    string decoded = encoded.substr(numDigits, len);  // DSA

    cout << "Decoded: " << decoded << "\n";

    //===== Multi Data =====//
    string multi = "3Cat5Mouse4Fish";
    int i = 0;
    cout << "Multi decode: ";
    while (i < multi.length()) {
        int l = stoi(multi.substr(i));  // 3
        int d = to_string(l).length();  // 1
        i += d;
        cout << multi.substr(i, l) << " ";
        i += l;
    }

    cout << endl;

    return 0;
}