#include <cstdio>

int main() {
    int x;
    scanf("%d", &x);
    if (x > 0) {
        if (x % 2 == 1) {
            printf("positif dan ganjil\n");
        } else{
            printf("positif dan genap\n");
        }
    } else if (x < 0) {
        if (x % 2 == -1){
            printf("negatif dan ganjil\n");
        } else{
            printf("negatif dan genap\n");
        }
    } else{
        printf("nol\n");
    }
}