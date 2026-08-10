#include <iostream>
#include <string>
using namespace std;

// Ham encode: them do dai vao truoc
// [1] HÀM MÃ HÓA
// ENG: This function encodes by adding length to the front.
// JPN: この関数は先頭に長さを追加してエンコードします。
// VIE: Hàm này mã hóa bằng cách thêm độ dài vào đầu.
string encode(string data) { return to_string(data.length()) + data; }

// Ham decode: Lay so o dau, cat lay du lieu;
// [2] HÀM GIẢI MÃ
// ENG: This function extracts the original string using the length.
// JPN: この関数は長さを使って元の文字列を取り出します。
// VIE: Hàm này lấy chuỗi ban đầu bằng cách dùng độ dài.
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

    // [3] XÁC MINH KẾT QUẢ
    // ENG: I verify that the result is correct.
    // JPN: 結果が正しいか検証します。
    // VIE: Tôi xác minh xem kết quả có đúng không.
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