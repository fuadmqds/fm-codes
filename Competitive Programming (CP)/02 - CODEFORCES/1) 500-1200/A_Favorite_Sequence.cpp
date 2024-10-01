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
    int n;
    cin >> n;
    vc<int> a(n);

    for (int &i : a) cin >> i;

    // 3 4 5 2 9 1 1
    // 0 1 2 3 4 5 6

    // 3 1 4 1 5 9 2 
    // 0 6 1 5 2 4 3
    
    int l = 0, r = n-1;
    vc<int> ans(n);

    FOR(0, n) {
        if (i & 1) {
            ans[i] = a[r--];
        } else {
            ans[i] = a[l++];
        }
    }

    for (int i : ans) {
        cout << i << ' ';
    }
    cout << "\n";
}

int main() {
    Bismillah;
    
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
// FM