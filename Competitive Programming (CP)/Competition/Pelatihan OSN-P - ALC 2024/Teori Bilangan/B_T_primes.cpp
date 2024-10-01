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
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const int LIM = 1e6 + 1;

bool isPrime[LIM];

void sieve(ll lim) {
    fill(isPrime, isPrime + lim, 1);
    isPrime[0] = 0; isPrime[1] = 0;

    for (ll i = 2; i <= lim; i++) {
        if (isPrime[i]) {
            for (ll j = i * i; j <= lim; j += i) {
                isPrime[j] = 0;
            }
        }
    }
}

int main() {
    Bismillah;

    sieve(LIM);

    ll n, x;
    cin >> n;
    while (n--) {
        cin >> x;

        ll tmp = sqrt(x);
        cout << (tmp * tmp == x && isPrime[tmp] ? "YES\n" : "NO\n");
    }
    return 0;
}
// FM