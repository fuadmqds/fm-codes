// Knapsack Secara Bottom-Up
// Time Complexity: O(NG)
// Memory Complexity: O(NG)

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
    dp(i, c) = max(dp(i - 1, c), dp(i - 1, c - w[i]) + v[i])
*/

#include <bits/stdc++.h>
using namespace std;

int N, G;
int v[101];
int w[101];
int dp[101][101]; // dp[i][c], isi dengan 0

int solve() {
    for (int i = 1; i <= N; ++i) {
        for (int c = 0; c <= G; ++c) {
            // jika tidak mengambil barang
            dp[i][c] = dp[i - 1][c];
            // jika mengambil barang
            if (c >= w[i]) {
                dp[i][c] = max(dp[i - 1][c], dp[i - 1][c - w[i]] + v[i]);
            }
        }
    }
    return dp[N][G];
}

int main() {
    cin >> N >> G;

    for (int i = 1; i <= N; ++i) { // One-based
        cin >> v[i] >> w[i];
    }

    cout << solve() << '\n';
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