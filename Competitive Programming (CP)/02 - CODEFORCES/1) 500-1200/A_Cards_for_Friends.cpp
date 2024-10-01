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
    int w, h, n, c = 1;
    cin >> w >> h >> n;

    while (w % 2 == 0 || h % 2 == 0) {
        if (w % 2 == 0) {
            w /= 2;
        } else if (h % 2 == 0) {
            h /= 2;
        }
        c <<= 1;
    }

    if (c >= n) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}   

int main() {
    Bismillah;
    
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
// FM