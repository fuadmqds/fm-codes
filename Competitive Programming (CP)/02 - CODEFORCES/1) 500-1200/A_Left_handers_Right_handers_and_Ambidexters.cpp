#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int l, r, a;
    cin >> l >> r >> a;

    if (l != r) {
        int tmp = (a - abs(r - l));
        if (tmp > 0) {
            if (tmp & 1) tmp--;
            cout << max(l, r) * 2 + tmp;
        } else {
            cout << (min(l, r) + a) * 2;
        }
    } else {
        if (a & 1) a--;
        cout << l + r + a;
    }
    return 0;
}
// FM