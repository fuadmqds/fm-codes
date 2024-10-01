#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

bool isGood(int x, int k) {
    bool digit[10] = {false};
    while (x) {
        digit[x % 10] = true;
        x /= 10;
    }
    for (int i = 0; i <= k; i++) {
        if (digit[i] == false) {
            return false;
        }
    }
    return true;
}

int main() {
    Bismillah;
    
    int n, k, good = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (isGood(a, k)) {
            good++;
        }
    }
    cout << good << endl;
    return 0;
}
// FM