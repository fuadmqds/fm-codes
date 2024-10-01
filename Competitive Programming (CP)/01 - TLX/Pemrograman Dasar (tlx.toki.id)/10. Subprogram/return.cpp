#include <cstdio>

int kubik(int x) { //mengembalikan nilai
    return x*x*x;
}

int main() {
    int volume = kubik(3);
    int selisih = volume - kubik(2);

    int x = 2;
    int y = 3*kubik(x) - 1;

    printf("4 kubik = %d\n", kubik(4));
    printf("selisih 3 kubik dengan 2 kubik = %d\n", selisih);
    printf("y = %d", y);
}

/*
cara memanggil fungsi yang mengembalikan
nilai:
x = kerja2() //dimasukkan ke variabel
*/