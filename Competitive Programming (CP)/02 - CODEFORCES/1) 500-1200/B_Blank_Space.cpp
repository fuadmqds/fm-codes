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
    int n, c = 0, ans = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        if (a == 0) c++;
        else c = 0;
        
        if (ans < c) ans = c;
    }
    cout << ans << "\n";
}

int main() {
    Bismillah;
    
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
// FM