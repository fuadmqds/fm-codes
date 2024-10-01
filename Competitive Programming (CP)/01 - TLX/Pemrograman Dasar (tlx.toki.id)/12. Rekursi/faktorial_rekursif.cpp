#include <cstdio>

int factorial(int x) {
    if (x == 1) {
        return 1;
    } else {
        return x * factorial (x-1);
    }
}

int main() {
    int N;
    scanf("%d", &N);

    printf("%d", factorial(N));
}