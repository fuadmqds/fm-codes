// Algoritma Insretion Sort
// Time Complexity: O(N^2)
// Time Complexity in best scenario: O(N)
#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int h[], int N) {
    for (int i = 0; i < N; i++) {
        int pos = i;
        while(pos > 0 && (h[pos] < h[pos-1])) { // While not right, bring forward
            swap(h[pos], h[pos-1]);
            pos -= 1;
        }
    }
}

int main() {
    int N = 10;
    int h[10] = {10, 2, 5, 7, 4, 8, 3, 1, 6, 9}; // 0 based array

    InsertionSort(h, N);
    for (int i = 0; i < N; i++) {
        cout << h[i] << " ";
    }
    return 0;
}