#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    int a, b, k, x;
    scanf("%d %d %d %d", &a, &b, &k, &x);

    while (k > 0) {
        x = abs(a*x + b);
        k--;
    }
    printf("%d", x);
}