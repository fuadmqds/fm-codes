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
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

vc<pair<int, int>> a, b;

int main() {
    Bismillah;
    
    int n, x, y;
    ll res = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        if (x < 0) a.eb(make_pair(x, y));
        else b.eb(make_pair(x, y));
    }

    sort(rall(a));
    sort(all(b));

    int la = a.size(), lb = b.size();
    if (la == lb) {
        for (int i = 0; i < la; i++) {
            res += a[i].se + b[i].se;
        }
    } else if (la > lb) {
        for (int i = 0; i < lb; i++) {
            res += a[i].se + b[i].se;
        }
        res += a[lb].se;
    } else {
        for (int i = 0; i < la; i++) {
            res += a[i].se + b[i].se;
        }
        res += b[la].se;
    }

    // line 34-49 can be shortened with just:
    // FOR(i, 0, min(a.size(), b.size() + 1)) res += a[i];
    // FOR(i, 0, min(a.size() + 1, b.size())) res += b[i];
    
    cout << res << '\n';
    return 0;
}
// FM