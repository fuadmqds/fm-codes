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

int main() {
    Bismillah;

    int n, t, s = 0, mx = 0, ans = 0;
    cin >> n >> t;

    vc <int> a(n);
    for (int &p : a) cin >> p;

    for (int i = 0 ; i < n; ++i) {
        while (mx < n && s + a[mx] <= t) {
            s += a[mx];
            mx++;
        }
        ans = max(ans, mx - i);
        s -= a[i];
    }

    cout << ans << endl;
    return 0;
}
// FM