// Start with basmalah, end with hamdalah ^_^

#include <algorithm>
#include <array>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>

using namespace std;
using ll = long long;
using str = string;

#define vc vector
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define fi first
#define se second

#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define ROF(i, a, b) for (int i = a; i >= b; --i)
#define Bismillah cin.tie(0)->sync_with_stdio(0)
#define Alhamdulillah return 0

int n, m;
vc<pair<int, int>> a;
vc<int> b;

int find_idx(int x) {
    int l = 0, r = n - 1, idx;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (a[mid].fi >= x) {
            idx = a[mid].se;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return idx;
}

int main() {
    Bismillah;

    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; ++i) {
        int t; cin >> t;
        a[i] = {t, i + 1};
    }

    cin >> m;
    b.resize(m);
    for (int &j : b) cin >> j;

    sort(all(a));
    ll v = 0, p = 0;
    for (int j : b) {
        int tmp = find_idx(j);
        v += (ll) tmp;
        p += (ll) n - tmp + 1;
    }

    cout << v << ' ' << p << '\n';

    Alhamdulillah;
}
// FM