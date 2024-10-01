// Algoritma Bubble Sort
// Time Complexity: O(N^2)
#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int h[], int N) {
    for (int i = 0; i < N-1; i++) {
        for (int j = 0; j < N-i-1; j++) {
            if (h[j] > h[j+1]) {
                swap(h[j], h[j+1]);
            }
        }
    }
}

int main() {
    int N = 10;
    int h[10] = {10, 2, 5, 7, 4, 8, 3, 1, 6, 9}; // 0 based array

    BubbleSort(h, N);
    for (int i = 0; i < N; i++) {
        cout << h[i] << " ";
    }
    return 0;
}