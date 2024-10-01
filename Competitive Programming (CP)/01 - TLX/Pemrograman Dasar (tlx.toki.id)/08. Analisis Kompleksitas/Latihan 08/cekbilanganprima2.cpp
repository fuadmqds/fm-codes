#include <cstdio>

int main() {
    int N, in;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &in);

        bool prima = true;
        if (in == 1) {
            prima = false;
        }
        //Cek jika "in" dibagi 2 sampai j * j = 0
        for (int j = 2; j * j <= in; j++) { //Kompleksitas = O(√N)
            if (in % j == 0) {
                prima = false;
                break;
            }
        }
        if (prima) {
            printf("YA\n");
        } else {
            printf("BUKAN\n");
        }
    }
}