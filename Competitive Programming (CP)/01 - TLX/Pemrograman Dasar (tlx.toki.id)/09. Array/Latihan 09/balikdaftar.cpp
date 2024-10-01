#include <cstdio>

int main() {
    int num[100];
    int N = 0;
    
    while (scanf("%d", &num[N]) != EOF) {
        N++;
    }
    for (int i = N-1; i >= 0; i--) {
        printf("%d\n", num[i]);
    }
}

/*
Cara run program yang menggunakan EOF:
- Masukkan input
- Tekan enter
- Tekan ctrl + Z //Untuk menandakan bahwa masukan sudah habis
- Tekan enter lagi
*/