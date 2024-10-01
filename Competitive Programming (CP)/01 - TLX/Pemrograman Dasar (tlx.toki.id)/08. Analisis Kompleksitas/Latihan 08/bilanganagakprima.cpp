#include <cstdio>

int main() {
    int N, in;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &in);

        bool primelike = true;
        int k = 0;
        for (int j = 2; j <= in-1; j++) {
            if (in % j == 0) {
                k++;
            }
            if (k > 2) {
                primelike = false;
                break;
            }
        }
        if (primelike) {
            printf("YA\n");
        } else {
            printf("BUKAN\n");
        }
    }
}