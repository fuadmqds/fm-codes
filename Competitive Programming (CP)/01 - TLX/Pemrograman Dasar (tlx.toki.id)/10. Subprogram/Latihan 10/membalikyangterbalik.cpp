#include <cstdio>

int A, B;

int reverse(int x) {
    int temp = x;
    int ret = 0;

    while (temp > 0) {
        ret = (ret * 10) + (temp % 10);
        temp = temp / 10;
    }
    return ret;
}

int main() {
    scanf("%d %d", &A, &B);
    int C = reverse(A) + reverse(B);
    printf("%d", reverse(C));
}