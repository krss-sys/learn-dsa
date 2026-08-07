#include <iostream>
#include <string>
using namespace std;

int main() {
    string data = "apple#banana#cherry#date";  // chuoi mau
    int i = 0;
    int n = data.size();

    cout << "Cac phan tu sau khi cat: \n";

    while (i < n) {
        int j = i;

        // Tim vi tri dau # hoac het chuoi
        while (j < n && data[j] != '#') {
            j++;
        }

        // In ra phan tu tu i den j - 1
        cout << "- " << data.substr(i, j - i) << endl;

        // Nhay den vi tri sau #
        i = j + 1;
    }

    return 0;
}