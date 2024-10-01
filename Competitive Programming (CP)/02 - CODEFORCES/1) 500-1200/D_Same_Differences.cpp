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

void solve() {
    /*
    a[i] - a[j] = i - j, i < j
    a[i] - i = a[j] - j, i < j
    b[i] = b[j], i < j
    */
    int n, a;
    cin >> n;

    ll ans = 0;
    map <int, int> b;
    for (int i = 0; i < n; i++) {
        cin >> a;
        a -= i;
        ans += b[a];
        b[a]++;
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