#include <cstdio>

void tukar(int &a, int &b) {//a dan x serta b dan y mengacu pada alamat memori yg sama
    a = b;
    b = temp;
}

int main() {
    int x = 1;
    int y = 2;
    tukar(x, y);
    printf("x=%d y=%d\n", x, y); //x=a, y=b
}