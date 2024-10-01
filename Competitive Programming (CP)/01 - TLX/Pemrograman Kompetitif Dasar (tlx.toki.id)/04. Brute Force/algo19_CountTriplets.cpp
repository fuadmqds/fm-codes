// Solusi Permasalahan Mengatur Persamaan
// Time Complexity: O(N^3)

/*
Contoh Soal 4.2: Mengatur Persamaan

Diberikan sebuah persamaan: p+q+r = 0. Masing-masing dari p, q, dan r harus 
merupakan anggota dari {a1,a2,...,aN}. Diketahui pula bahwa semua nilai {a1,a2,...,aN}
unik. Berapa banyak triplet (p, q, r) berbeda yang memenuhi persamaan tersebut?
Batasan
• 1 ≤ N ≤ 2.000
• −105 ≤ ai ≤ 105
*/

#include <bits/stdc++.h>
using namespace std;

int N = 10, p, q, r;
int a[10] = {1, -2, 3, -4, 5, -6, 7, -8, 9, -10};

int countTriplets() {
    int count = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                p = a[i];
                q = a[j];
                r = a[k];
                if (p + q + r == 0) {
                    count++;
                }
            }
        }
    }
    return count;
}

int main() {
    cout << countTriplets() << endl;
    return 0;
}