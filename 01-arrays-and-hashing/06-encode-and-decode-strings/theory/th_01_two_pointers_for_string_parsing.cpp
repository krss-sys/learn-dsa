#include <iostream>
#include <string>
using namespace std;

int main() {
    string data = "apple#banana#cherry#date";  
    int i = 0;
    int n = data.size();

    cout << "Cac phan tu sau khi cat: \n";

    while (i < n) {
        int j = i;

        //ENG: I find the next hash sign.
        //JPN: 次の「#(hashu)」を探します。
        //VIE: Tôi tìm dấu # tiếp theo
        while (j < n && data[j] != '#') {
            j++;
        }

        //ENG: I get the current word and print it.
        //JPN: 現在の単語を取得して表示します。
        //VIE: Tôi lấy từ hiện tại và in ra.
        cout << "- " << data.substr(i, j - i) << endl;

        //ENG: I move to the next word.
        //JPN: 次の単語に移動します。
        //VIE: Tôi chuyển sang từ tiếp theo.
        i = j + 1;
    }

    return 0;
}