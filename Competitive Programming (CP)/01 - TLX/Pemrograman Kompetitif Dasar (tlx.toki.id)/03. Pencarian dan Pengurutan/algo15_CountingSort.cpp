// Algoritma Insretion Sort
// Time Complexity: O(N + M)
#include <bits/stdc++.h>
using namespace std;

void CountingSort(int h[], int N) {
    int ftable[101] = {0}; // Initialize with zeros
    for (int i = 0; i < N; i++) {
        int x = h[i];
        ftable[x]++;
    }
    int index = 0;
    for (int i = 1; i <= 100; i++) { // Becareful with the iteration (must match with the size of ftable[])
        for (int j = 0; j < ftable[i]; j++) { // ftable[0] is always 0. So we can skip it
            h[index] = i;
            index++;
        }
    }
}

int main() {
    int N = 10;
    int h[10] = {10, 2, 5, 7, 4, 8, 3, 1, 6, 9}; // 0 based array

    CountingSort(h, N);
    for (int i = 0; i < N; i++) {
        cout << h[i] << " ";
    }
    return 0;
}