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
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define out(a, b) cout << a << ' ' << b << endl
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
    Bismillah;

    int n, x;
    cin >> n >> x;

    vc<pair<int, int>> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].fi;
        v[i].se = i + 1;
    }

    sort(all(v));

    int l = 0, r = n - 1;
    while (l < r) {
        if (v[l].fi + v[r].fi == x) {
            cout << v[l].se << ' ' << v[r].se << '\n';
            return 0;
        } else if (v[l].fi + v[r].fi > x) {
            r--;
        } else {
            l++;
        }
    }

    // If using for-loop instead
    // int r = n - 1;
    // for (int l = 0; l < n; l++) {
    //     while (r > l && v[l].fi + v[r].fi >= x) {
    //         if (v[l].fi + v[r].fi == x) {
    //             cout << v[l].se << ' ' << v[r].se << '\n';
    //             return 0;
    //         }
    //         r--;
    //     }
    // }

    cout << "IMPOSSIBLE\n";
    return 0;
}
// FM