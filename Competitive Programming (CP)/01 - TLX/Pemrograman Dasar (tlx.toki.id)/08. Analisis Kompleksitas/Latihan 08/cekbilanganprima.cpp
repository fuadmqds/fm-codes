#include <cstdio>
#include <cmath>

int main() {
    int N;
    scanf("%d", &N);

    int in;
    for (int i = 0; i < N; i++) {
        scanf("%d", &in);

        bool prima = true;
        if (in == 1) {
            prima = false;
        }
        //Cek jika "in" dibagi 2 hingga akar(j) = 0
        for (int j = 2; j <= sqrt(in); j++) { //Kompleksitas = O(√N)
            if (in % j == 0) {
                prima = false;
                break;
            }
        }
        if (prima) {
            printf("YA\n");
        } else {
            printf ("BUKAN\n");
        }
    }
}