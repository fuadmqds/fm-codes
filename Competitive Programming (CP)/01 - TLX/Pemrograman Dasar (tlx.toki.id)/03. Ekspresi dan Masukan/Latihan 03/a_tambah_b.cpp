#include <cstdio>

int main(){
    int A, B;
    scanf("%d", &A);
    scanf("%d", &B);

    if (1 <= A, B <= 100) {
        printf("%d\n", A + B);
    }
    else {
        printf("Coba Lagi");
    }
    return 0;
}