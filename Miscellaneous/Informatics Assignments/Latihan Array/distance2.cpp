/* Jarak Kota Tanpa Redundansi */

#include <stdio.h>
#include <vector>
#define JUMLAH_KOTA 4
using namespace std;

int main() {
    vector<int> jarak;
    for (int i = 0; i < JUMLAH_KOTA; i++) {
        for (int j = 0; j < JUMLAH_KOTA; j++) {
            int x;
            scanf("%d", &x);
            jarak.push_back(x);
        }
    }

    int asal, tujuan;
    scanf("%d %d", &asal, &tujuan);
    printf("Jarak Kota %d ke Kota %d = %d", asal, tujuan, jarak[(asal)*JUMLAH_KOTA + tujuan]);

    return 0;
}

/*
0 10 15 20
10 0 8 10
15 8 0 5
20 10 5 0
0 1
*/