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
#define out(a, b) cout << a << ' ' << b << endl;
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    Bismillah;
    
    int n;
    cin >> n;

    vc<ll> p(n);
    for (ll &i : p) {
        cin >> i;
    }

    sort(all(p));

    ll median = p[n / 2], ans = 0;
    for (ll i : p) {
        ans += abs(i - median);
    }

    cout << ans << endl;
    return 0;
}
// FM