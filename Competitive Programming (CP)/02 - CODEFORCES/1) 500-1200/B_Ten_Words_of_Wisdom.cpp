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
    int n, a, b, max = -9999999, win = -1;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;  
        if (a <= 10) {
            if (max < b) {
                max = b;
                win = i+1;
            }
        }
    }
    cout << win << "\n";
}

int main() {
    Bismillah;
    
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
// FM