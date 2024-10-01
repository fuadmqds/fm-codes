#include <cstdio>

int main() {
    int N;
    scanf("%d", &N);

    int num[N];
    for (int i = 1; i <= N; i++) {
        scanf("%d", &num[i]);
    }
    for (int i = N; i > 0; i--) {
        printf("%d ", num[i]);
    }
}