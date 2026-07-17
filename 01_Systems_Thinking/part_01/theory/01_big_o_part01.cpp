#include <iostream>
using namespace std;

// ============================================
// HÀM O(1) - Hằng số
// ============================================
int layPhanTuDau(int mang[], int soLuong) {
    return mang[0];  // Luôn 1 bước
}

// ============================================
// HÀM O(log n) - Logarit
// ============================================
int demChiaDoi(int n) {
    int soBuoc = 0;
    cout << "  " << n;

    while (n > 1) {
        n = n / 2;
        soBuoc++;
        cout << " -> " << n;
    }
    cout << "   (can " << soBuoc << " buoc)" << endl;

    return soBuoc;
}

// ============================================
// HÀM MAIN
// ============================================
int main() {
    cout << "========== O(1) vs O(log n) ==========" << endl << endl;

    // ===== O(1) =====
    cout << "--- O(1) - Hang so ---" << endl;
    int arr[5] = {100, 200, 300, 400, 500};
    cout << "Mang: 100, 200, 300, 400, 500" << endl;
    cout << "Phan tu dau tien: " << layPhanTuDau(arr, 5) << endl;
    cout << "=> Luon mat 1 buoc!" << endl << endl;

    // ===== O(log n) =====
    cout << "--- O(log n) - Logarit ---" << endl;
    cout << "n = 100:" << endl;
    demChiaDoi(100);
    cout << endl;

    cout << "n = 1000:" << endl;
    demChiaDoi(1000);
    cout << endl;

    cout << "n = 1000000:" << endl;
    demChiaDoi(1000000);
    cout << endl;

    // ===== Kết luận =====
    cout << "=== KET LUAN ===" << endl;
    cout << "O(1)   : 1 buoc du n bao nhieu" << endl;
    cout << "O(log n): voi n = 1.000.000 chi can 20 buoc" << endl;
    cout << "=> Ca 2 deu rat nhanh!" << endl;

    return 0;
}