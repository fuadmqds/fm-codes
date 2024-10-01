#include <cstdio>

int main() {
    int N;
    scanf("%d", &N);

    int k = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d", k);
            if (k < 9) {
                k++;
            } else {
                k = 0;
            }
        }
        printf("\n");
        
    }
}