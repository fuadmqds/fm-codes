#include <cstdio>

int Hz[1000];

int main() {
    int N, num, modus, max = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        Hz[num]++; //jumlah kemunculan
    }
    for (int i = 0; i <= 1000; i++) {
        if (max <= Hz[i]) {
            max = Hz[i];
            modus = i;
        }
    }
    printf("%d", modus);
}