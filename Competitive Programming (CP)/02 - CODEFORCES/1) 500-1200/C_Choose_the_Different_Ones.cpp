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
#define out(a, b) cout << a << ' ' << b << endl;
#define each(p) for (auto i : p) cout << i << ' ';
#define Bismillah cin.tie(0)->sync_with_stdio(0)
#define Alhamdulillah return 0

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    set<int> a, b;
    FOR(i, 1, n) {
        int x; cin >> x;
        if (x <= k)
            a.insert(x);
    }
    FOR(j, 1, m) {
        int y; cin >> y;
        if (y <= k)
            b.insert(y);
    }
    if (a.size() < k / 2 || b.size() < k / 2) {
        cout << "NO\n";
        return;
    }
    for (auto j : b)
        a.insert(j);
    cout << (a.size() < k ? "NO\n" : "YES\n");
}

int main() {
    Bismillah;

    int tc;
    cin >> tc;
    while (tc--) solve();

    Alhamdulillah;
}
// FM

/*
void solve() {
    int n, m, k, c, d, x;
    cin >> n >> m >> k;
    set<int> a, b;
    FOR(i, 1, n) {
        int x; cin >> x;
        if (x <= k)
            a.insert(x);
    }
    FOR(j, 1, m) {
        int y; cin >> y;
        if (y <= k)
            b.insert(y);
    }
    c = d = k / 2;
    for (x = 1; x <= k; ++x) {
        if (a.count(x) == 0 && b.count(x) == 0)
            break;
        if (a.count(x) && b.count(x) == 0)
            c--;
        else if (b.count(x) && a.count(x) == 0)
            d--;
    }
    if (x <= k || c < 0 || d < 0)
        cout << "NO\n";
    else 
        cout << "YES\n";
}

int main() {
    Bismillah;

    int tc;
    cin >> tc;
    while (tc--) solve();

    Alhamdulillah;
}
// FM
*/