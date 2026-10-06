#include <iostream>
#include <string>
using namespace std;

int main() {
    string data = "DSA";

    //===== Ma Hoa =====//
    // [1] MÃ HÓA
    // ENG: I append the string length to the front.
    // JPN: 文字列の長さを先頭に追加します。
    // VIE: Tôi thêm độ dài chuỗi vào phía trước.
    string encoded = to_string(data.length()) + data;
    cout << "Encoded: " << encoded << "\n";

    //===== Giai Ma =====//
    int len = stoi(encoded);                          // 3
    int numDigits = to_string(len).length();          // 1

    // [2] GIẢI MÃ CHUỖI ĐƠN
    // ENG: I get the original string using its length.
    // JPN: 長さを使って、元の文字列を取得します。
    // VIE: Tôi lấy chuỗi ban đầu bằng cách dùng độ dài của nó.
    string decoded = encoded.substr(numDigits, len);  // DSA

    cout << "Decoded: " << decoded << "\n";

    //===== Multi Data =====//
    string multi = "3Cat5Mouse4Fish";
    int i = 0;
    cout << "Multi decode: ";

    // [3] GIẢI MÃ NHIỀU CHUỖI
    // ENG: I decode each word and jump to the next one.
    // JPN: 各単語を復号して、次に移動します。
    // VIE: Tôi giải mã từng từ và chuyển sang từ tiếp theo.
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