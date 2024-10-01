#include <bits/stdc++.h>
typedef long long ll;
#define vc vector
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define fi first
#define se second
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

void solve() {
    int n;
    cin >> n;

    int x[n];
    set<int> a;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++) {
        if (a.find(x[i]) != a.end()) {
            cout << "NO\n";
            return;
        }
        a.insert(x[i]);
    }
    cout << "YES\n";
}

int main() {
    Bismillah;
    
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}
// FM