#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    double N;
    scanf("%lf", &N);

    int F = floor(N);
    int C = ceil(N);

    printf("%d %d", F, C);
}