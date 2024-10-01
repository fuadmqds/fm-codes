#include <iostream>
using namespace std;

void CountingSort(int h[], int n) {
    int ftable[101] = {0};
    for (int i = 0; i < n; i++) {
        int x = h[i];
        ftable[x]++;
    }
    int index = 0;
    for (int i = 1; i <= 100; i++) {
        for (int j = 0; j < ftable[i]; j++) {
            h[index] = i;
            index++;
        }
    }
}

int main() {
    int n; cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    CountingSort(a, n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}