#include <cstdio>
#include <cstdlib>

int main() {
    int x1, y1, x2, y2;
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);

    int manhattan = abs(x1 - x2) + abs(y1 - y2);
    //kegunaan abs untuk mengembalikan nilai absolut
    printf("%d", manhattan);
}