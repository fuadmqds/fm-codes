#include <cstdio>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        //Mencetak spasi sebanyak N - i
        for (int k = 1; k <= N - i; k++) {
            printf(" ");
        }
        //Mencetak '*' sebanyak i
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}