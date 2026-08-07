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

        string numStr = data.substr(i, j - i);
        int number = stoi(numStr);

        cout << "So: " << number << "\n";
        sum += number;

        i = j + 1;
    }

    cout << "Tong cac so: " << sum << "\n";
    string message = "Ket qua tong: " + to_string(sum);
    cout << message << "\n";

    return 0;
}