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

    int n, m;
    cin >> n >> m;

    vc<pair<int, int>> a(n); // lamp, ans
    vc<int> b(m);
    
    for (auto &i : a) { i.fi = 1; }
    for (int &j : b) { cin >> j; }

    for (int j : b) {
        for (int i = j - 1; i < n; ++i) {
            if (a[i].fi) {
                a[i].fi = 0;
                a[i].se = j;
            }
        }
    }

    for (auto i : a) { cout << i.se << ' '; }
    
    Alhamdulillah;
}
// FM