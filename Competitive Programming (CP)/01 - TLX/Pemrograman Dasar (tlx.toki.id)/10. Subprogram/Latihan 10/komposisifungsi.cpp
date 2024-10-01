#include <cstdio>
#include <cmath>
using namespace std;

int A, B, K, x;

int absfunc(int A, int B, int x) {
    int func = abs(A*x + B);
    return func;
}

int main() {
    scanf("%d %d %d %d", &A, &B, &K, &x);

    while (K > 0) {
        x = absfunc(A, B, x);
        K--;
    }
    printf("%d", x);
}