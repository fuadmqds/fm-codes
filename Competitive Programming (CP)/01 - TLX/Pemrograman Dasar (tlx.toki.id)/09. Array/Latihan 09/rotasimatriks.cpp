#include <cstdio>

int main() {
    int M, N;
    scanf("%d %d", &M, &N);

    int matrix[M][N];
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int j = 0; j < N; j++) {
        for (int i = M-1; i >= 0; i--) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}