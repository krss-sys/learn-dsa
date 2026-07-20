#include <iostream>
using namespace std;

// VI DU 1: IN TAT CA CAP SO
void inCapSo(int n) {
    cout << "1. In tat ca cap so (i, j): " << endl;
    int dem = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            dem++;
        }
    }
    cout << "   Tong: " << dem << " = " << n << " x " << n << " = " << n * n << endl;
}

// VI DU 2: KIEM TRA TRUNG LAP
bool kiemTraTrungLap(int mang[], int n) {
    cout << "\n2. Kiem tra trung lap: " << endl;
    int soSanh = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            soSanh++;
            if (mang[i] == mang[j]) {
                cout << "   Tim thay trung lap: " << mang[i] << " tai vi tri " << i << " va " << j
                     << endl;
                cout << "   So lan so sanh: " << soSanh << endl;
                return true;
            }
        }
    }
    cout << "   Khong tim thay trung lap!!!" << endl;
    cout << "   So lanm so sanh: " << soSanh << endl;
    return false;
}

// VI DU 3: SO SANH O(n) VA O(n^2)
void soSanh() {
    cout << "3. So sanh O(n) va O(n^2): " << endl;

    int n = 10;
    int buocOn = 0;
    for (int i = 0; i < n; i++) {
        buocOn++;
    }

    int buocOn2 = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            buocOn2++;
        }
    }

    cout << "   Voi n = " << n << ": " << endl;
    cout << "   O(n): " << buocOn << " buoc" << endl;
    cout << "   O(n^2): " << buocOn2 << " buoc" << endl;
    cout << "   => O(n^2) cham gap " << buocOn2 / buocOn << " lan" << endl;
}

int main() {
    cout << "\n========== O(n^2) ==========" << endl;
    inCapSo(10);
    cout << endl;

    int arr[6] = {1, 2, 3, 4, 5, 3};
    cout << "Mang: 1, 2, 3, 4, 5, 3" << endl;
    kiemTraTrungLap(arr, 6);
    cout << endl;

    soSanh();

    cout << "=== KET LUAN ===" << endl;
    cout << "O(n^2) xuat hien khi cos 2 vong lap long nhau" << endl;
    cout << "Chi dung khi n < 10000" << endl;

    return 0;
}