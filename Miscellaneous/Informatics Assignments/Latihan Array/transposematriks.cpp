/* Mencetak Transpose Matriks */
#include <stdio.h>
#include <vector>
using namespace std;

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    vector<vector<int>> matriksA(N, vector<int>(M, 0));
    vector<vector<int>> matriksB(M, vector<int>(N, 0));

    // Membaca Matriks
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matriksA[i][j]);
        }
    }

    // Melakukan Transpose Matriks
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            matriksB[j][i] = matriksA[i][j];
        }
    }

    // Mencetak Matriks
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matriksB[i][j]);
        }
        printf("\n");
    }

    return 0;
} 