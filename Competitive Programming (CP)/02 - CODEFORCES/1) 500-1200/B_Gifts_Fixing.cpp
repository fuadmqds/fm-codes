#include <bits/stdc++.h>
typedef long long ll;
#define vc vector
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define fi first
#define se second
#define all(v) v.begin(), v.end()
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
const int MAX = 1e9 + 7;

void solve() {
    int n, minA = MAX, minB = MAX;
    cin >> n;

    vc<int> a(n);
    vc<int> b(n);

    for (int &i : a) {
        cin >> i;
        if (minA > i) minA = i;
    }

    for (int &j : b) {
        cin >> j;
        if (minB > j) minB = j;
    }

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += max(a[i] - minA, b[i] - minB);
    }

    cout << ans << endl;
}

int main() {
    Bismillah;
    
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
// FM