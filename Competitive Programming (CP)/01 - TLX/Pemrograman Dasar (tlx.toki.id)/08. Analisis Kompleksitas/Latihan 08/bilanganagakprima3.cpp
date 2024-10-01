#include <cstdio>

int main() {
    int N, in;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &in);

        int k = 0;
        for (int j = 2; j*j <= in; j++) {
            if (in % j == 0) {
                k++;
            }
        }
        if (k <= 1) {
            printf("YA\n");
        } else {
            printf("BUKAN\n");
        }
    }
}