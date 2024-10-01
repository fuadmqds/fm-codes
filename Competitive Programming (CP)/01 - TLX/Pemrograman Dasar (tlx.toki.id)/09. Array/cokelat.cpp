#include <cstdio>

int main() {
    int N;
    scanf("%d", &N);
    
    int M1[N][N];
    int M2[N][N];
    int sum[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &M1[i][j]);
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &M2[i][j]);
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            sum[i][j] = M1[i][j] + M2[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d", sum[i][j]);
            if (j+1 < N) {
                printf(" ");
            }
        }
        printf("\n");
    }
}