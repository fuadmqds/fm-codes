#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using str = string;

#define vc vector
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define fi first
#define se second
#define in insert
#define mp make_pair
#define ub upper_bound
#define lb lower_bound
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define ROF(i, a, b) for (int i = a - 1; i >= b; --i)
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void solve() {
    int n;
    cin >> n;

    vc<int> a(n);
    for (int &i : a) cin >> i;

    sort(all(a));

    if (a[0] != a[1]) {
        cout << "YES\n";
    } else {
        bool ok = 0;
        for (int i=0; i<n; i++) {
            if (a[i] % a[0] != 0) {
                ok = 1;
                break;
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
}

int main() {
    Bismillah;
    
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
// FM