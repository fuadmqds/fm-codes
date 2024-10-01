#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int arr[n + 1], nEven = 0, nOdd = 0;
    int idxEven, idxOdd;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            nEven++;
            idxEven = i;
        } else {
            nOdd++;
            idxOdd = i;
        }
    }

    if (nEven > nOdd) {
        cout << idxOdd << endl;
    } else {
        cout << idxEven << endl;
    }
    return 0;
}

// Slightly better solution
/*
#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;

    int n, a, ev = 0, od = 0, x, y;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> a;
        if (a & 1) {
            od++;
            x = i;
        } else {
            ev++;
            y = i;
        }
    }

    cout << (od < ev ? x : y);
    return 0;
}
// FM
*/