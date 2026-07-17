#include <iostream>
using namespace std;

int inPhanTuCuoi(int mang[], int n) { return mang[n - 1]; }

int demChiaBa(int n) {
    int soBuoc = 0;
    cout << "n = " << n;

    while (n > 1) {
        n = n / 3;
        soBuoc++;
        cout << " -> " << n;
    }
    cout << "(Can " << soBuoc << " buoc)" << endl;

    return soBuoc;
}

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};

    cout << "Mang: 1, 2, 3, 4, 5, 6" << endl;
    cout << "Phan tu cuoi: " << inPhanTuCuoi(arr, 6) << endl;

    cout << "Dem so buoc chia cua n = 100000000" << endl;
    cout << "So buoc: " << demChiaBa(100000000) << endl;

    return 0;
}