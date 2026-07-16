#include <iostream>
using namespace std;

// Ham 1: brute-force Two Sum - O(n^2)
void twoSumBruteForce(int arr[], int n, int target)
{
    cout << "\n=== BRUTE-FORCE O(n^2) ===" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // Dem so lan so sanh de thay O(n^2)
            if (arr[i] + arr[j] == target)
            {
                cout << "Tim thay: arr[" << i << "] + arr[" << j << "] = " << target << endl;
                return;
            }
        }
    }
    cout << "Khong tim thay cap nao!!!" << endl;
}