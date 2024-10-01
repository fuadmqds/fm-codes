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
	int n, first, last;
    string s;

    cin >> n >> s;
    FOR(i, 0, n) {
        if (s[i] == 'B') {
            first = i;
            break;
        }
    }

    ROF(i, n-1, 0) {
        if (s[i] == 'B') {
            last = i;
            break;
        }
    }

    cout << last - first + 1 << endl;
}

int main() {
	Bismillah;

	int t; cin >> t;
	while (t--) solve();
	return 0;
}
// FM