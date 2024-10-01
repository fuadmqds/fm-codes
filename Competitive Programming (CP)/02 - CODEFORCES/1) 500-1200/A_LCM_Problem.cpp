#include <bits/stdc++.h>
typedef long long ll;
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

void solve() {
	ll l, r;
    cin >> l >> r;
    
    if (l * 2 <= r) {
        cout << l << ' ' << l * 2 << "\n";
    } else {
        cout << "-1 -1\n";
    }
}

int main() {
	Bismillah;

	int t; cin >> t;
	while (t--) solve();
	return 0;
}
// FM