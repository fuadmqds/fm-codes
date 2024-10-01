#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll M = 1e9 + 7;

ll binpow(ll a, ll b) {
    if (b == 0) { return 1; }
    ll res = binpow(a, b / 2);
    res = (res * res) % M;
    return (b & 1 ? res * a % M : res);
}

ll inv(ll x) {
    return binpow(x, M - 2);
}

int main() {
    ll n, k;
    cin >> n >> k;

    if (k == 1) {
        cout << n << '\n';
        return 0;
    }

    ll ans = ((binpow(k, n + 1) * (binpow(k, n) - 1)) % M * inv(k - 1)) % M;
    cout << ans << '\n';
    return 0;
}


/*
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll M = 1e9 + 7;

ll binpow(ll a, ll b) {
    if (b == 0) { return 1; }
    ll res = binpow(a, b / 2);
    res = (res * res) % M;
    return (b & 1 ? res * a % M : res);
}

int main() {
    ll n, k;
    cin >> n >> k;

    ll ans = binpow(k, n + 1);
    ll res = 0;
    for (int i = 0; i < n; ++i) {
        res += binpow(k, i);
        res %= M;
    }
    ans *= res;
    ans %= M;
    cout << ans << '\n';
    return 0;
}
*/


// Ryu's Code
/*
include <bits / stdc++.h>
#define int long long
const int MOD = 1e9 + 7;
using namespace std;

int modex(int b, int e, int m) {
    int r = 1;
    while (e > 0) {
        if ((e & 1) == 1) r = (r * b) % m;
        e >>= 1;
        b = (b * b) % m;
    }
    return r;
}

signed main() {
    int n, k; cin >> n >> k;
    int l = n + 1, r = 2 * n, ans = 0;
    for (int i = l;i <= r;i++) {
        ans = (ans + modex(k, i, MOD)) % MOD;
    }
    cout << ans << endl;
    return 0;
}
*/