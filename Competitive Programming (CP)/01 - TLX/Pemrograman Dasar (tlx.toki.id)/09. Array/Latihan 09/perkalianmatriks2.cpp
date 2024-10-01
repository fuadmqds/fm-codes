#include <cstdio>

int main(){
    int N, M, P;
    scanf("%d %d %d", &N, &M, &P);

    int A[N][M];
    int B[M][P];
    int C[N][P];
    for (int i = 0; i < N; i++) {
        for (int k = 0; k < M; k++) {
            scanf("%d", &A[i][k]);
        }
    }
    for (int k = 0; k < M; k++) {
        for (int j = 0; j < P; j++) {
            scanf("%d", &B[k][j]);
        }
    }
    int temp = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++) {
            for (int k = 0; k < M; k++) {
                temp += A[i][k] * B[k][j];
            }
            C[i][j] = temp;
            temp = 0;
            
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}