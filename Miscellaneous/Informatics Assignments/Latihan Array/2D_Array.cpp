/* Jarak Kota A dan B */

#include <stdio.h>
#include <vector>
#define JUMLAH_KOTA 4
using namespace std;

int main() {
    vector<vector<int>> jarak;
    int i, j, asal, tujuan;

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

    scanf("%d %d", &asal, &tujuan);
    printf("Jarak Kota %d ke Kota %d = ", asal, tujuan);
    printf("%d km", jarak[asal][tujuan]);

    return 0;
}

/*
Example Input:
0 10 15 20
10 0 8 10
15 8 0 5
20 10 5 0
0 1
*/