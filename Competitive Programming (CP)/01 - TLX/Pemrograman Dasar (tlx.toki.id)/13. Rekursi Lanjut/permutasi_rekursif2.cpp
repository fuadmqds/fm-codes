// Program mencari permutasi N bilangan (bilangan tidak berulang)
// Kompleksitas program = O(N!)
#include <cstdio>

int N;
int catat[101];
int pernah[101];

void tulis(int kedalaman) {
    if (kedalaman >= N) {
        // Cetak password
        for (int i = 0; i < N; i++) {
            printf("%d", catat[i]); // Cetak
        }
        printf("\n");
    } else {
        // Masuk ke lapisan lebih dalam
        for (int i = 1; i <= N; i++) {
            if (!pernah[i]) {
                pernah[i] = true;
                catat[kedalaman] = i; // Catat di sini
                tulis(kedalaman + 1);
                pernah[i] = false;
            }
        }
    }
}

int main() {
    scanf("%d", &N);

    tulis(0);
}