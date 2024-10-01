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
    int n, ans = -1;
    string s;
    cin >> n >> s;

    for (char c : s) {
        int ascii = int(c);
        if (ans < ascii - 96) {
            ans = ascii - 96;
        }
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