#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int a[3], mid, totalDistance = 0;

    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }

    sort(a, a + 3);
    mid = a[1];

    if (a[0] != mid) {
        totalDistance += abs(a[0] - mid);
    }
    if (a[2] != mid) {
        totalDistance += abs(a[2] - mid);
    }
    cout << totalDistance << endl;
    return 0;
}