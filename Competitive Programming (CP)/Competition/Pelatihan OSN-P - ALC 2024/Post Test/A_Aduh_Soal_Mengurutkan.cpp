#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
#define vc vector
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define fi first
#define se second
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0)

int n, m;

bool customSort(pair<string, int> a, pair<string, int> b) {
    for (int i = 0; i < n; ++i) {
        if (a.fi[i] == b.fi[i]) { continue; }
        
        if (i % 2 == 0) {
            return a.fi[i] < b.fi[i];
        } else {
            return a.fi[i] > b.fi[i];
        }
    }
}

int main() {
    Bismillah;

    cin >> n >> m;
    pair<string, int> a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i].fi;
        a[i].se = i + 1;
    }
    sort(a, a + n, customSort);
    for (int i = 0; i < n; ++i) {
        cout << a[i].se << ' ';
    }
    return 0;
}
// FM