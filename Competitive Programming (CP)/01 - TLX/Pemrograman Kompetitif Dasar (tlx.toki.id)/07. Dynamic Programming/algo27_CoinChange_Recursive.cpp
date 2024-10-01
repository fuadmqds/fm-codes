// Penyelesaian Coin Change Secara Rekursif
// Time Complexity: O(M^N)
#include <bits/stdc++.h>
using namespace std;

/*
Contoh Soal 7.1: Coin Change
Diberikan M jenis koin, masing-masing jenis bernilai a1,a2,...,aM rupiah. Asumsikan
banyaknya koin untuk setiap nominal yang ada tak terbatas. Tentukan banyaknya
koin paling sedikit untuk membayar tepat sebesar N rupiah!

Batasan
1 <= M <= 100
1 <= N <= 100
1 <= a <= 999
*/

/*
State
f(N) = fungsi untuk menghitung banyak koin minimal yang diperlukan untuk membayar sebesar N rupiah
Base Case
f(0) = 0
Transition
f(N) = min f(N - a[k]) + 1,   1 <= k <= M, a[k] <= N
*/

int M;
int a[101];

int solve(int N) {
    if (N == 0) {
        return 0;
    }

    int best = INT_MAX;
    for (int k = 1; k <= M; ++k) {
        if (a[k] <= N) {
            best = min(best, solve(N - a[k]) + 1);
        }
    }
    return best;
}

int main() {
    int N;
    cin >> M >> N;

    for (int i = 1; i <= M; ++i) {
        cin >> a[i];
    }

    cout << solve(N) << '\n';
    return 0;
}

/*
Contoh Input
3 12
1 5 10
Contoh Output
3
*/