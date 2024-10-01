// Algoritma Selection Sort
// Time Complexity: O(N^2)
// Time Complexity in partial sort: O(KN)
#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int h[], int N) {
    for (int i = 0; i < N; i++) {
        int minIndex = i;
        for (int j = i+1; j < N; j++) {
            if (h[j] < h[minIndex]) {
                minIndex = j;
            }
        }
        swap(h[i], h[minIndex]);
    }
}

int main() {
    int N = 10;
    int h[10] = {10, 2, 5, 7, 4, 8, 3, 1, 6, 9}; // 0 based array

    SelectionSort(h, N);
    for (int i = 0; i < N; i++) {
        cout << h[i] << " ";
    }
    return 0;
}