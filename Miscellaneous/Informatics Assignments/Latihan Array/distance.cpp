/* Rute Kota dan Total Jarak */

#include <stdio.h>
#include <vector>
#define JUMLAH_KOTA 4
using namespace std;

int main() {
    vector<vector<int>> jarak;
    int i, j, kota1, kota2, kota3;
    int sum = 0;

    for (i = 0; i < JUMLAH_KOTA; i++) {
        vector<int> vtr;
        for (j = 0; j < JUMLAH_KOTA; j++) {
            int x;
            scanf("%d", &x);
            vtr.push_back(x);
        }
        jarak.push_back(vtr);
        vtr.clear();
    }

    scanf("%d %d %d", &kota1, &kota2, &kota3);
    printf("Jarak Kota %d - Kota %d - Kota %d = ", kota1, kota2, kota3);
    sum = jarak[kota1][kota2] + jarak[kota2][kota3];
    printf("%d km", sum);

    return 0;
}

/*
Example Input:
0 10 15 20
10 0 8 10
15 8 0 5
20 10 5 0
1 2 3
*/