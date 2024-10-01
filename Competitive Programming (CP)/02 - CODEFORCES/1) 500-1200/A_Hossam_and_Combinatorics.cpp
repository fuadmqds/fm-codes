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
    
    int t; cin >> t;
    while (t--) {
        ll n, cMin = 0, cMax = 0, min = INT_MAX, max = INT_MIN;
        cin >> n;

        vc<ll> a(n);

        for (ll &i : a) {
            cin >> i;
            if (min > i) min = i;
            if (max < i) max = i;
        }

        for (ll i : a) {
            if (i == max) cMax++;
            else if (i == min) cMin++;
        }

        if (min == max) {
            cout << n * (n-1) << '\n';
        } else {
            cout << 2ll * cMin * cMax << '\n';
        }
    }
    return 0;
}
// FM