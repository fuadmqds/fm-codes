#include <cstdio>

int main() {
    int N, temp;
    scanf("%d", &N);
    
    int sum[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &temp);
            sum[i][j] = temp;
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &temp);
            sum[i][j] += temp;
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