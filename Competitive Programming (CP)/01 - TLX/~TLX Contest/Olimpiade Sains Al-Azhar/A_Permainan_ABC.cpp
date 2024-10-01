#include <iostream>
using namespace std;

int euclid(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return euclid(b, a % b);
    }
}

int main() {
    int A;
    cin >> A;

    for (int i = A/2; i < A; i++) {
        if (euclid(A, i) > 1) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}

/*
//The most efficient code
#include <cstdio>

int main() {
    int x;
    scanf("%d", &x);
    int a = 1;
    int b = 2;
    while (b <= x) {
        if (x % b == 0) {
            printf("%d\n", x / b * a);
            return 0;
        }
        b += a; // 2, 3, 5, 8, 13...
        a = b - a; // 1, 1, 2, 3, 5...
    }
    printf("-1\n");
    return 0;
}
*/