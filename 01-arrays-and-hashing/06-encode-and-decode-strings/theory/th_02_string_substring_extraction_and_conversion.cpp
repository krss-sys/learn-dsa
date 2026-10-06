#include <iostream>
#include <string>
using namespace std;

int main() {
    string data = "2#5#8#10";
    int i = 0;
    int n = data.size();
    int sum = 0;

    while (i < n) {
        int j = i;
        while (j < n && data[j] != '#') {
            j++;
        }

        //ENG: I convert the string to an integer.
        //JPN: 文字列を数値に変換します。
        //VIE: Tôi đổi chuỗi thành số.
        string numStr = data.substr(i, j - i);
        int number = stoi(numStr);

        cout << "So: " << number << "\n";

        //ENG: I add the number to sum.
        //JPN: 数字を合計に足します。
        //VIE: Tôi cộng số này vào tổng.
        sum += number;

        i = j + 1;
    }

    cout << "Tong cac so: " << sum << "\n";

    //ENG: I make a message string from the sum.
    //JPN: 合計からメッセージを作ります。
    //VIE: Tôi tạo thông báo từ kết quả tổng.
    string message = "Ket qua tong: " + to_string(sum);
    cout << message << "\n";

    return 0;
}