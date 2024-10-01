#include <cstdio>

void factor(int x) {
    for (int i = 2; i <= x; i++) {
        int count = 0;
        while (x % i == 0) {
            count++;
            x /= i;
        }
        if (count > 0) {
            printf("%d", i);
            if (count > 1) {
                printf("^%d", count);
            }
            if (x > 1) {
                printf(" x ");
            }
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);
    factor(N);
}