#include <bits/stdc++.h>
typedef long long ll;
#define vc vector
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define fi first
#define se second
#define all(v) v.begin(), v.end()
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    // find factors of x that is <= n
    int n, x;
    cin >> n >> x;

    vc<int> fac;

    for (int i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            if (x / i == i) {
                if (i <= n) fac.eb(i);
            } else {
                if (x / i > n) continue;
                fac.eb(i);
                fac.eb(x / i);
            }
        }
    }

    cout << fac.size() << endl;
    return 0;
}
// FM