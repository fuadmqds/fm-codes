#include <cstdio>

int main() {
    int N, A = 100000, B = -100000, in[100];
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &in[i]);

        if(A > in[i]) {
            A = in[i];
        }
        if(B < in[i]) {
            B = in[i];
        }
    }
    printf("%d %d\n", B, A);
}