#include <iostream>
using namespace std;

// O(n) - tuyen tinh
int timMax(int mang[], int n) {
    int max = mang[0];
    for (int i = 0; i < n; i++) {
        if (mang[i] > max) {
            max = mang[i];
        }
    }
    return max;
}

int tinhTong(int mang[], int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += mang[i];
    }
    return tong;
}

int demSoLanChia(int n) {
    int dem = 0;
    while (n > 1) {
        n = n / 2;
        dem++;
    }
    return dem;
}

void moPhongNLogN(int n) {
    int soLanChia = demSoLanChia(n);
    cout << "Voi n = " << n << ": " << endl;
    cout << "   So lan chia doi: " << soLanChia << " lan" << endl;
    cout << "   Moi lan duyet " << n << " phan tu" << endl;
    cout << "   Tong buoc: " << n << " x " << soLanChia << " = " << n * soLanChia << " lan" << endl;
    cout << "   =>O(n log n)" << endl;
}

int main() {
    cout << "========== O(n) ==========" << endl;
    int arr[7] = {3, 45, 12, 4, 32, 67, 9};
    cout << "Mang: 3, 45, 12, 4, 32, 67, 9" << endl;
    cout << "So lon nhat: " << timMax(arr, 7) << endl;
    cout << "Tong mang: " << tinhTong(arr, 7) << endl;
    cout << "=> DUYET 7 PHAN TU, O(7) = O(n)" << endl;

    cout << "\n========= O(n log n) ==========" << endl;
    moPhongNLogN(16);
    cout << endl;
    moPhongNLogN(60);
    cout << endl;
    moPhongNLogN(1000);
    cout << endl;

    return 0;
}