// Solusi Permasalahan Mengatur Persamaan yang dioptimasi
// Time Complexity: O(N^2 log N)

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

bool exist(int x) {
    int l = 0, r = N-1, mid;
    while (l <= r) {
        mid = (l + r) / 2;
        if (a[mid] > x) {
            r = mid - 1;
        } else if (a[mid] < x) {
            l = mid + 1;
        } else {
            return true;
        }
    }
    return false;
}

int countTripletsFast() {
    sort(a, a + N);
    int count = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            p = a[i];
            q = a[j];
            r = -(p + q);
            if (exist(r)) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    cout << countTripletsFast() << endl;
    return 0;
}