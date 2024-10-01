// Knapsack Secara Top-Down
// Time Complexity: O(NG)

/*
Contoh Soal 7.2: Knapsack
Diberikan N buah barang, dinomori dari 1 sampai N. Barang ke-i memiliki harga vi
rupiah dan berat wi gram. Kita memiliki tas yang berkapasitas G gram. Kita ingin
memasukkan beberapa barang ke dalam tas, sedemikian sehingga jumlah berat dari
barang-barang yang kita masukan tidak lebih dari kapasitas tas dan jumlah harganya
sebanyak mungkin.

Contoh
Jika tersedia 5 buah barang sebagai berikut:
Nomor | Barang | Harga Berat
1     |   6    |     5
2     |   5    |     4
3     |   4    |     3
4     |   6    |     7
5     |   4    |     4
Jika kita memiliki kapasitas sebesar 14, solusi terbaik adalah mengambil barang ke 1,
2, dan 5. Total harga yang diperoleh adalah 6 + 5 + 4 = 15.
*/

/*
State
dp(i, c) = jumlah harga maksimum yang mungkin diperoleh, jika kita mempunyai
barang ke-1 sampai ke-i dan sisa kapasitas tas kita adalah c gram

Base Case
dp(0, c) = 0

Transition
// jika tidak mengambil barang
if i > 0, c < w[i]
    dp(i, c) = dp(i-1, c)
// jika mengambil barang, maka bandingkan dengan jika tidak mengambil barang
else if i > 0, c >= w[i]
    dp(i, c) = max(dp(i-1, c - w[i]) + v[i], dp(i-1, c))
*/

#include <bits/stdc++.h>
using namespace std;

int N, G;
int v[101];
int w[101];
int memo[101][101];
bool computed[101][101];

int dp(int i, int c) {
    if (i == 0) {
        return 0;
    }

    if (computed[i][c]) {
        return memo[i][c];
    }
    
    int best = dp(i-1, c);
    if (c >= w[i]) {
        best = max(best, dp(i-1, c - w[i]) + v[i]);
    }
    
    memo[i][c] = best;
    computed[i][c] = true;
    return best;
}

int main() {
    cin >> N >> G;

    for (int i = 1; i <= N; ++i) { // One-based
        cin >> v[i] >> w[i];
    }

    cout << dp(N, G) << '\n';
    return 0;
}

/*
Contoh Input
5 14
6 5
5 4
4 3
6 7
4 4
Contoh Output
15
*/