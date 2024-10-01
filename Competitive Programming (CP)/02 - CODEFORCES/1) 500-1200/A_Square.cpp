#include <bits/stdc++.h>
typedef long long ll;
#define vc vector
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define fi first
#define se second
#define all(v) v.begin(), v.end()
#define FOR(i, a, b) for (int (i) = (a); (i) < (b); ++(i))
#define ROF(i, a, b) for (int (i) = (a); (i) >= (b); --(i))
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

void solve() {
    int x[4], y[4], s;
    FOR(i, 0, 4) {
        cin >> x[i] >> y[i];
    }

    FOR(i, 0, 3) {
        if (x[i] != x[i+1]) {
            s = abs(x[i] - x[i+1]);
            break;
        }
    }   
    cout << s * s << endl;
}

int main() {
    Bismillah;
    
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
// FM