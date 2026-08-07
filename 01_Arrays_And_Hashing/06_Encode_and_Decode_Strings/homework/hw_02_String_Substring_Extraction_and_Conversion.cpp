#include <iostream>
#include <string>
using namespace std;

int main() {
    string data = "So:5#So:8#So:3";
    int i = 0;
    int n = data.size();
    int sum = 0;

    while (i < n) {
        int j = i;
        while (j < n && data[j] != '#') {
            j++;
        }
        string phanTu = data.substr(i, j - i);

        string soText = phanTu.substr(3);
        int so = stoi(soText);
        cout << "So: " << so << " ";
        sum += so;
        i = j + 1;
    }
    string result = "Tong cac so: " + to_string(sum);
    cout << result << "\n";

    return 0;
}