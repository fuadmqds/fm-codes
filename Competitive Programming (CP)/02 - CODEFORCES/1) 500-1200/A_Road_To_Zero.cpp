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
    ll x, y, a, b, p = 0, min;
    cin >> x >> y >> a >> b;

    if (x < y) min = x;
    else min = y;

    if (b < 2 * a) {
        p += min * b;
        x = x - min;
        y = y - min;
    }
    p += x * a + y * a;

    cout << p << endl;
}

int main() {
	Bismillah;

	int tc; cin >> tc;
	while (tc--) solve();
	return 0;
}