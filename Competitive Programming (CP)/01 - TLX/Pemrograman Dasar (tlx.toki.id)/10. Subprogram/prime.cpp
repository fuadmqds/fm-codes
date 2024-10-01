#include <cstdio>

bool prima(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i*i <= n; i++) {   // Pertidaksamaan ini ekuivalen dengan i ≤ √N
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    scanf("%d", &N);
    bool check = prima(N);

    if (check) {
        printf("YA");
    } else {
        printf("BUKAN");
    }
}