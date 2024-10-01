#include <cstdio>

int main() {
    int N;
    scanf("%d", &N);
    
    int hasil = 0; //agar nilai awal hasil diketahui (0) sebelum masuk ke loop
    
    for (int i = 0; i < N; i++) {
        int B[i];
        scanf("%d", &B[i]);
        hasil += B[i]; //nilai awal hasil = 0
    }
    printf("%d\n", hasil); //nilai akhir hasil = jumlah dari B[i]
}