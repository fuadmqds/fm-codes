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

    vc<int> a(n), b(n);

    for (int &i : a) cin >> i;
    for (int &j : b) cin >> j;

    sort(all(a));
    sort(rall(b));

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += 1LL * a[i] * b[i];
    }

    cout << ans << '\n';
    return 0;
}
// FM