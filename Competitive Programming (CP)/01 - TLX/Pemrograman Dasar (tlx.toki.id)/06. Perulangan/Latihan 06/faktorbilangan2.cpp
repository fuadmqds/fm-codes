#include <cstdio>

int main() {
    int N;
    scanf("%d", &N);

    for(int i = N; i > 0; i--) {
        if(N % i == 0) {
            printf("%d\n", i);
        }
    }
}

//versi menggunakan for