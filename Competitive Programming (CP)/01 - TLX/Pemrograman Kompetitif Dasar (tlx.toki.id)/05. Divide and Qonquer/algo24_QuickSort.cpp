// Algoritma Quick Sort
// Time Complexity in best/avarage scenario: O(N long N)
// Time Complexity in wortst case scenario: O(N^2)
#include <bits/stdc++.h>
using namespace std;

void quickSort(int arr[], int left, int right) {
    if (left >= right) {
        return;
    } else {
        int pos = arr[(left + right) / 2];

        int pLeft = left;
        int pRight = right;
        while (pLeft <= pRight) {
            while (arr[pLeft] <= pos) {
                pLeft++;
            }
            while (arr[pRight] > pos) {
                pRight--;
            }
            if (pLeft <= pRight) {
                swap(arr[pLeft], arr[pRight]);
                pLeft++;
                pRight--;
            }
        }

        // Sampai saat ini, dipastikan pRight < pLeft
        quickSort(arr, left, pRight);
        quickSort(arr, pLeft, right);
    }
}

int main() {
    int arr[9] = { 2, 5, 7, 4, 6, 1, 3, 8, 9 };

    quickSort(arr, 0, 8);

    for (int i = 0; i < 9; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}