#include <iostream>
#include <string>
using namespace std;

int main() {
    string data = "Hoc_sinh_A#Hoc_sinh_B#Hoc_sinh_C#Hoc_sinh_D";
    int i = 0;
    int n = data.size();
    cout << "Danh sach hoc sinh: \n";

    while (i < n) {
        int j = i;
        while (j < n && data[j] != '#') {
            j++;
        }
        if (data.substr(i, j - i) == "Hoc_sinh_C") {
            i = j + 1;
            continue;
        }
        cout << "- " << data.substr(i, j - i) << endl;
        i = j + 1;
    }
    return 0;
}