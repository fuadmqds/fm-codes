#include <cstdio>
#include <cstring>

char s[1001];
int arr[101];

int main() {
    memset(s, 'x', sizeof(s));
    memset(arr, -1, sizeof(arr));
    printf("%c %d\n", s[0], arr[0]);
}

/*
Nilai x terbatas pada tipe data char, atau angka di antara
-128 sampai 127 saja.
Fungsi ini biasanya juga dimanfaatkan untuk menginisialisasi
array bilangan dengan 0 atau -1.
*/