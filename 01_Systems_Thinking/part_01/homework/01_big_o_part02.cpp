#include <iostream>
using namespace std;

int timMin(int mang[], int n) {
    int min = mang[0];
    for (int i = 0; i < n; i++) {
        if (mang[i] < min) {
            min = mang[i];
        }
    }
    return min;
}

int soLanChia(int n) {
    int dem = 0;
    while (n > 1) {
        n = n / 3;
        dem++;
    }
    return dem;
}

void hienThi(int n) {
    int soLan = soLanChia(n);
    cout << "Voi n = " << n << ": " << endl;
    cout << "   So lan chia ba: " << soLan << " lan" << endl;
    cout << "   Moi lan duyet " << n << " phan tu" << endl;
    cout << "   Tong buoc: " << soLan << " x " << n << ": " << soLan * n << endl;
}

int main() {
    cout << "========= O(n)==========" << endl;
    int arr[8] = {5, 8, 2, 10, 7, 15, 3, 12};
    cout << "Mang: 5, 8, 2, 10, 7, 15, 3, 12" << endl;
    cout << "So nho nhat: " << timMin(arr, 8);

    cout << "\n========= O(n log n) =========" << endl;
    hienThi(3000000);
    cout << endl;
    hienThi(1000);

    return 0;
}
