// Solusi Permasalahan Subset Sum yang dioptimasi
// Time Complexity: O(2^N)

/*
Contoh Soal 4.1: Subset Sum

Diberikan N buah bilangan {a1,a2,...,aN} dan sebuah bilangan K. Apakah terdapat
sebuah subhimpunan sedemikian sehingga jumlahan dari elemen-elemennya sama
dengan K? Bila ya, maka keluarkan "YA". Selain itu, keluarkan "TIDAK".
Batasan
• 1 ≤ N ≤ 15
• 1 ≤ K ≤ 105
• 1 ≤ ai ≤ 105
*/

#include <bits/stdc++.h>
using namespace std;

int N = 10, K = 43;
int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

bool optimizedSolve(int i, int sum) {
    if (i >= N) {
        if (sum == K) {
            return true;
        } else {
            return false;
        }
    }
    // Pruning (pemangkasan): optimasi dengan menghindari
    // ruang pencarian yang sudah pasti salah
    if (sum > K) { 
        return false;
    }
    bool option1 = solve(i + 1, sum + a[i]);
    bool option2 = solve(i + 1, sum);
    return option1 || option2;
}

void solveSubsetSum() {
    if (optimizedSolve(0, 0)) {
        cout << "YA";
    } else {
        cout << "TIDAK";
    }
}

int main() {
    solveSubsetSum();
    return 0;
}