#include <cstdio>

void gambar(int x) { //tidak mengembalikan nilai
    for (int i = 0; i < x; i++) {
        printf("*");
    }
    printf("\n");
}

int main() {
    gambar(3);
    gambar(5);
}
/*
cara memanggil fungsi yang tidak
mengembalikan nilai:
kerja1()

tambahan:
return pada void

void gambar(int x) { 
    if (x > 1000) {
        return; //return akan menghentikan eksekusi dan keluar dari program
    }
    for (int i = 0; i < x; i++) {
        printf("*");
    }
    printf("\n");
}
*/