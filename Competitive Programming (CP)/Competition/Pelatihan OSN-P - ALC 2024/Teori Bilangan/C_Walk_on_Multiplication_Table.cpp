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

int main() {
    Bismillah;

    ll n, ans = LLONG_MAX;
    cin >> n;

    // O(sqrt(n))
    for (ll i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
           ans = min(ans, (n / i) + i - 2);
        }
    }

    cout << ans << '\n';
    return 0;
}
// FM