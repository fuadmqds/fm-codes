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

const ll P = 1e9 + 7;

// Time Complexity: O(n + m log P)

ll powmod(ll a, ll b) {
    a %= P;
    if (a == 0) return 0;
    ll res = 1;
    while (b) {
        if (b & 1) {
            res *= a;
            res %= P;
            b--;
        }
        a *= a;
        a %= P;
        b >>= 1;
    }
    return res;
}

ll inv(ll x) {
    return powmod(x, P - 2); // O(log P)
}

int main() {
    Bismillah;
    
    str s;
    cin >> s;

    map <ll, ll> c;
    ll n = s.size(); // O(1)

    for (int i = 0; i < n; ++i) { // O(n), n = s.size
        c[s[i]]++;
    }

    ll fact[n + 1];
    fact[0] = 1;
    fact[1] = 1;

    for (ll i = 2; i <= n; ++i) { // O(n)
        fact[i] = fact[i-1] * i % P;
    }

    ll ans = fact[n];

    for (auto it : c) { // O(m), m = c.size
        if (it.se != 1) {
            ans = (ans * inv(fact[it.se])) % P;
        }
    }
    
    /*
    // Alternative
    for (map<ll, ll>::iterator it = c.begin(); it != c.end(); ++it) {
        if (it->se != 1) {
            ans = (ans * inv(fact[it->se])) % P;
        }
    }
    */

    cout << ans << '\n';
    return 0;
}
// FM