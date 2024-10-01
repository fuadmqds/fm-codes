#include <cstdio>
#include <cstring>

char s[1001];
int main() {
    scanf("%s", s);
    printf("%d\n", strlen(s));
}

/*
penggunaan strlen
// Buruk, O(N^2)
for (int i = 0; i < strlen(s); i++) {
printf("%c", s[i]);
}
// Baik, O(N)
int len = strlen(s); //di simpan ke variabel untuk menghindari pemanggilan yg berulang-ulang
for (int i = 0; i < len; i++) {
printf("%c", s[i]);
}
*/