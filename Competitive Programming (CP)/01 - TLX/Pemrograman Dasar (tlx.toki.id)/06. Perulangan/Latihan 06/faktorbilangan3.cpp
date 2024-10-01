#include <cstdio>

int main() {
    int N, i;
    scanf("%d", &N);

    i = N;
    while(i > 0) {
        if(N % i == 0) {
            printf("%d\n", i);
        }
        i--;
    }
}

//versi menggunakan while