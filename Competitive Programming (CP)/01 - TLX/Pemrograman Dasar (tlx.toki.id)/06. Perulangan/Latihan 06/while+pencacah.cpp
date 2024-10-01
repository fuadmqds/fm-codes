#include <cstdio>

int main() {
    int x;
    int sum = 0;
    while (scanf("%d", &x) != EOF) {
        sum += x;
    }
    printf("%d", sum);
}
/*
Cara run program yang menggunakan EOF:
- Masukkan input
- Tekan enter
- Tekan ctrl + Z //Untuk menandakan bahwa masukan sudah habis
- Tekan enter lagi
*/