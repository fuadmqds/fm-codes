#include <bits/stdc++.h>
typedef long long ll;
#define vc vector
#define fi first,
#define se second
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int n;
vc <int> a;

void solve() {
    for (int i = 0; i < n; i++) {
        if (a[i+1] >= 2 * a[i] && a[i+2] >= a[i]) {
            a[i+1] -= 2 * a[i];
            a[i+2] -= a[i];
        } else {
            puts("NO");
            return;
        }
    }
    puts("YES");
}

int main() {
    Bismillah;

    int t; cin >> t;
    while (t--) {
        cin >> n;

        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            a.eb(x);
        }
        a.eb(0);
        a.eb(0);
        solve();
        a.clear();
    }
    return 0;
}
// FM