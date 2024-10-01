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

void solve() {
    int c1, c2, c3;
    int a[6], sum = 0;
    cin >> c1 >> c2 >> c3;

    for (int i = 1; i <= 5; ++i) {
        cin >> a[i];
        sum += a[i];
    }

    if (a[1] > c1 || a[2] > c2 || a[3] > c3 || c1 + c2 + c3 < sum) {
        cout << "NO\n";
        return;
    }

    c1 -= a[1];
    c2 -= a[2];
    c3 -= a[3];
    a[4] -= c1;
    a[5] -= c2;

    sum = (a[4] > 0 ? a[4] : 0);
    sum += (a[5] > 0 ? a[5] : 0);

    if (c3 < sum) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
}

int main() {
    Bismillah;

    int t;
    cin >> t;
    while (t--) solve();

    Alhamdulillah;
}
// FM