#include <cstdio>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (i % 10 == 0) {
            continue;
        }
        if (i == 42) {
            printf("ERROR");
            break;
        }
        printf("%d\n", i);
    }
}