#include <cstdio>

int main() {
    int N, num[100];
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &num[i]);
    }
    for (int i = N-1; i >= 0; i--) {
        printf("%d ", num[i]);
    }
}