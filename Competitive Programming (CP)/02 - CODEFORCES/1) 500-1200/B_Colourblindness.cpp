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
    int n;
    string a, b;
    cin >> n >> a >> b;

    for (int x = 0; x < n; x++) {
        if ((a[x] == 'R' && b[x] != 'R') || (a[x] != 'R' && b[x] == 'R')) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
    Bismillah;

    int t; cin >> t;
    while (t--) solve();
    return 0;
}
// FM