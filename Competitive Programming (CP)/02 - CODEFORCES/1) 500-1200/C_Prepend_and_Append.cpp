#include <bits/stdc++.h>
typedef long long ll;
#define vc vector
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define fi first
#define se second
#define all(v) v.begin(), v.end()
#define FOR(a, b) for (int i = a; i < b; i++)
#define ROF(a, b) for (int i = a; i >= b; i--)
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

void solve() {
    int n, c = 0;
    string s;
    cin >> n >> s;

    FOR(0, n / 2) {
        if (s[i] != s[n-i-1]) c++;
        else break;
    }
    cout << n - c * 2 << "\n";
}

int main() {
    Bismillah;
    
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
// FM