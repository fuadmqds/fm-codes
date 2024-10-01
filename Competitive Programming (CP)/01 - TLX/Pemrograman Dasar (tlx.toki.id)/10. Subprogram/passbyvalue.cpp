#include <cstdio>

void tukar(int a, int b) {//memasukkan nilai x ke a dan y ke b
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 1;
    int y = 2;
    tukar(x, y);
    printf("x=%d y=%d\n", x, y); //x, y tidak berhubungan dengan a, b
}