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

const ll p = 1e9 + 7;

// Time Complexity: O(x log p)

// O(log b)
ll powmod(ll a, ll b) {
    a %= p;
    if (a == 0) return 0;
    ll res = 1;
    while (b) {
        if (b & 1) {
            res *= a;
            res %= p;
            b--;
        }
        a *= a;
        a %= p;
        b >>= 1;
    }
    return res;
}

ll inv(ll a) {
    return powmod(a, p-2) % p; // O(log p)
}

int main() {
    Bismillah;
    
    int n, m;
    cin >> n >> m;

    int x = n + m - 1;
    int y = n - 1;
    
    ll fact[x+1];
    fact[0] = 1;
    fact[1] = 1;

    // O(x)
    for (int i = 2; i <= x; i++) {
        fact[i] = 1ll * i * fact[i-1] % p;
    }

    ll ans = ((fact[x] % p) * (inv(fact[x-y]) % p) * (inv(fact[y]) % p)) % p;
    cout << ans << '\n';
    return 0;
}
// FM

/*
ans = (n + m - 1)C(n-1)!
    = (n + m - 1)! / (n + m - 1 - n - 1)! * (n-1)!
    = (n + m - 1)! * (n + m - 1 - n - 1)!^-1 * (n-1)!^-1

Using Modular Multiplication Invers
https://codeforces.com/blog/entry/78873
*/