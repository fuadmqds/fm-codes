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

int main() {
    Bismillah;

    int n, f;
    cin >> n >> f;

    vc<int> k(n), l(n);
    vc<pair<int, int>> dif(n);

    for (int i = 0; i < n; ++i) {
        cin >> k[i] >> l[i];
        dif[i] = { min(k[i] * 2, l[i]) - min(k[i], l[i]), i };
    }

    ll ans = 0;
    sort(rall(dif));

    for (int i = 0; i < f; ++i) {
        int idx = dif[i].se;
        ans += (ll) min(k[idx] * 2, l[idx]);
    }

    for (int i = f; i < n; ++i) {
        int idx = dif[i].se;
        ans += (ll) min(k[idx], l[idx]);
    }

    cout << ans << '\n';

    Alhamdulillah;
}
// FM