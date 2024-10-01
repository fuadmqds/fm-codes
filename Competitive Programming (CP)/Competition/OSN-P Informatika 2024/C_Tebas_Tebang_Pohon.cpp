#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n, m;
    cin >> n >> m;

    vector<ll> a(n);
    ll up = -1;
    for (ll &i : a) {
        cin >> i;
        up = max(up, i);
    }

    ll ans = -1;
    for (ll i = 0; i <= up; ++i) {
        ll sum = 0;
        for (ll j : a) {
            if (j > i) {
                sum += j - i;
                if (sum >= m) break;
            }
        }
        if (sum >= m) {
            ans = i;
        }
    }
    cout << ans << '\n';
    return 0;
}