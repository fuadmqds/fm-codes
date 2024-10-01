#include <cstdio>

int main() {
    int N;
    scanf("%d", &N);

    int k = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            if (k == 10) {
                k = 0;
            }
            printf("%d", k);
            k++;
        }
        printf("\n");
        
    }
}