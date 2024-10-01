#include <cstdio>

// O(N)

int factorial(int x) {
    int ans = 1;
    for (int i = 2; i <= x; i++) {
        ans *= i;
    }
    return ans;
}

int main() {
    int N;
    scanf("%d", &N);

    printf("%d", factorial(N));
}