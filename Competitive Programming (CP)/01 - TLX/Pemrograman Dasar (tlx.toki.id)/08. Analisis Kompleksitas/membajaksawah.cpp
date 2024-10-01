//Program membajak sawah [kompleksitas O(N^2)]
//Mencoba semua kemungkinan R dan C

#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    int N, R, C;
    scanf("%d", &N);
    R = 1;
    C = N;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (i*j == N) {
                if (abs(R-C) > abs(i-j)) {
                    R = i;
                    C = j;
                }
            }
        }
    }
    printf("%d %d\n", R, C);
}