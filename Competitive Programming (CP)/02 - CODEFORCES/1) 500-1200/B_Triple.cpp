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
    int n, a, ans = -1;

    cin >> n;
    vc<int> cnt(n+1, 0);
    
    FOR(i, 0, n) {
        cin >> a;
        ++cnt[a];

        if (cnt[a] >= 3) {
            ans = a;
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

/*
void solve() {
    int n, ans = -1;
    cin >> n;

    vc <int> a(n);
    for (int& i : a) cin >> i;

    sort(all(a));

    int c = 1;
    FOR(i, 1, n) {
        if (a[i] == a[i - 1]) {
            c++;
        }
        else {
            c = 1;
        }
        if (c >= 3) {
            ans = a[i];
            break;
        }
    }

    cout << ans << endl;
}
*/

/*
void solve() {
    int n, a, ans = -1;
    map<int, int> hz;

    cin >> n;
    FOR(i, 0, n) {
        cin >> a;
        hz[a]++;

        if (hz[a] >= 3) ans = a;
    }
    cout << ans << endl;
}
// FM
*/