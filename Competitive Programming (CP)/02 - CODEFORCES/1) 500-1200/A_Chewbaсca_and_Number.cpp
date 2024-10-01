#include <bits/stdc++.h>
typedef long long ll;
#define vc vector
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    ll x, n = 0, mpl = 1;
    cin >> x;

    while (x) {
        ll d = x % 10;
        if (x / 10 == 0) {
            if (9 - d == 0) {
                d = d;
            }
            else if (9 - d < d) {
                d = 9 - d;
            }
        } else {
            if (9 - d < d) {
                d = 9 - d;
            }
        }

        n += d * mpl;
        mpl *= 10;
        x /= 10;
    }
    cout << n << endl;
    return 0;
}
// FM