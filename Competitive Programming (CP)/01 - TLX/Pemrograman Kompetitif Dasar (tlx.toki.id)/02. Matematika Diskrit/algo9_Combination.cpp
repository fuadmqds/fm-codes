// Program Penggunaan Segitiga Pascal untuk Mencari Kombinasi
// Time Complexity O(N^2)
#include <iostream>
using namespace std;

void precomputeCombination(int N) {
    int C[N+1][N+1];
    for (int i = 0; i <= N; i++) {
        C[i][0] = 1;
        for (int j = 1; j <= N-1; j++) {
            C[i][j] = C[i-1][j-1] + C[i-1][j];
        }
        C[i][i] = 1;
    }
    for (int i = 0; i <= N; i++) {
        cout << "Baris ke-" << i << ": "; 
        for (int j = 0; j <= i; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int N;
    cin >> N;

    precomputeCombination(N);
    return 0;
}