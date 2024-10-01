// Contoh Program Pencarian Sederhana
// Time Complexity: O(N)
#include <bits/stdc++.h>
using namespace std;

void search(int h[], int x, int N) {
    int res = -1;
    for (int i = 0; i < N; i++) {
        if (h[i] == x) {
            res = i;
        }
    }
    if (res == -1) {
        cout << "Beri hadiah lain" << endl;
    } else {
        cout << res << endl;
    }
}

int main() {
    int N = 10;
    int x = 7;
    int h[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // 0 based array
    search(h, x, N);
    return 0;
}