#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, x, y;

    cin >> n;
    int wire[n+1];
    for (int i = 1; i <= n; i++) {
        cin >> wire[i];
    }

    cin >> m;
    for (int i = 1; i <= m; i++) {
        cin >> x >> y;
        if (x + 1 <= n) {
            wire[x+1] += wire[x] - y;
        }
        if (x - 1 >= 1) {
            wire[x-1] += y - 1;
        }
        wire[x] = 0;
    }

    for (int i = 1; i <= n; i++) {
        cout << wire[i] << endl;
    }
    return 0;
}