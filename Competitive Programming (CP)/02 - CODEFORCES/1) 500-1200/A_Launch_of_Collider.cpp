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

    int n;
    cin >> n;

    ll time = 0, min = LLONG_MAX;
    vc<pair<char, int>> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].fi;
    }
    for (int i = 0; i < n; i++) {
        cin >> v[i].se;
    }

    for (int i = 0; i < n - 1; i++) {
        if (v[i].fi == 'R' && v[i+1].fi == 'L') {
            if (v[i].se < v[i+1].se) {
                time = (v[i+1].se - v[i].se) / 2;
                if (min > time) {
                    min = time;
                }
            }
        }
    }

    cout << (time == 0 ? -1 : min);
    return 0;
}
// FM