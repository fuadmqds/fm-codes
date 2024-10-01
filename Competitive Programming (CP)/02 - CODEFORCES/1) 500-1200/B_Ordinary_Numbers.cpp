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
    int n, ans = 0;
    cin >> n;

    // d.(n^0 + n^1 + n^2 ... n^k)
    for (ll k = 1; k <= n; k = k * 10 + 1) {
        for (int d = 1; d <= 9; d++) {
            if (k * d <= n) {
                ans++;
            } else {
                break;
            }
        }
    }
    cout << ans << endl;
}

int main() {
    Bismillah;
    
    int t;
    cin >> t;

    while (t--) solve();
    return 0;
}
// FM

/*

*/