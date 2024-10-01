#include <cstdio>

int main() {
    int N;
    scanf("%d", &N);

    int count = 0; //Banyaknya prima yang sudah ditemukan
    int cur = 2; //Nilai yang akan diperiksa keprimaannya

    while (count < N) {
        bool prima = true;
        //Mengecek jika cur dibagi 2 hingga cur dibagi cur-1 menghasilkan sisa 0 atau tidak
        for (int i = 2; i <= cur-1; i++) {
            if (cur % i == 0) {
                prima = false;
                break;
            }
        }
        if(prima) {
            //Ditemukan prima!
            //Cetak prima
            printf("%d\n", cur);
            count++;
        }
        //Lanjut memeriksa bilangan berikutnya
        cur++;
    }
    //Keluar dari while, dipastikan count = N
}