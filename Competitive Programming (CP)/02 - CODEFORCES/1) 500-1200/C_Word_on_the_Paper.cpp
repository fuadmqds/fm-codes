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
    char g[8][8];
    string s = "";

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> g[i][j];
        }
    }
    
    for (int j = 0; j < 8; j++) {
        for (int i = 0; i < 8; i++) {
            if (g[i][j] != '.') {
                s = s + g[i][j];
            }
        }
    }
    cout << s << "\n";
}

int main() {
    Bismillah;
    
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
// FM