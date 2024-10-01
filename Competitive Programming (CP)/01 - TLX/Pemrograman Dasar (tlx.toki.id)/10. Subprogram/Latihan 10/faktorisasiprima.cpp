#include <cstdio>

int main(){
    int N;
    scanf("%d", &N);
    
    for (int i = 2; i <= N; i++) {
        int count = 0;
        while (N % i == 0) {
            count++;
            N /= i;
        }
        if (count > 0) {
            printf("%d", i);
            if (count > 1) {
                printf("^%d", count);
            }
            if (N > 1) {
                printf(" x ");
            }
        }
    }
    printf("\n");
}