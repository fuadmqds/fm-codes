#include <cstdio>
#include <cstring>

char s[1001];
char t[1001];

int main() {
    scanf("%s %s", s, t);
    printf("%d\n", strcmp(s, t));
}

/*
Nilai kembalian:
Negatif, artinya s lebih awal dari t.
Nol, artinya s sama dengan t.
Positif, artinya s lebih akhir dari t
*/