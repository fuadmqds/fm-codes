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
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0)

ll a, b, c, N;

ll pow(ll p, ll q) {
    if (q == 0) { return 1; }
    ll res = pow(p, q / 2);
    res = (res * res) % N;
    return (q & 1 ? res * p % N : res);
}

int main() {
    Bismillah;
    
    cin >> a >> b >> c >> N;
    while (c--) {
        a = pow(a, b);
    }
    cout << a + 1 << '\n';
    return 0;
}
// FM