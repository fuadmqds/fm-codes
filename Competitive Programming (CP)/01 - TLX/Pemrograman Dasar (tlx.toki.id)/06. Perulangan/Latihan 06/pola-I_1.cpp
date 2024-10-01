#include <cstdio>

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    for (int i = 1; i <= N; i++) {
        if (i % K != 0) {
            printf("%d ", i);
        } else if (i % K == 0) {
            printf("* ");
        }
    }
}