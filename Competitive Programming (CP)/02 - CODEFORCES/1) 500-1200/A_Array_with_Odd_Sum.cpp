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
    int n, a, od = 0, ev = 0, sum = 0;
    cin >> n;
    FOR(i, 0, n) {
        cin >> a;
        if (a & 1) od++;
        else ev++;
        sum += a;
    }
    cout << (od >= 1 && ev >= 1 || sum & 1 ? "YES\n" : "NO\n");
}

int main() {
	Bismillah;

	int t; cin >> t;
	while (t--) solve();
	return 0;
}
// FM