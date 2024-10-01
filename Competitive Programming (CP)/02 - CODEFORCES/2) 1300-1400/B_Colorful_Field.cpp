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

    int n, m, k, t;
    cin >> n >> m >> k >> t;

    vc<string> plants{"Carrots", "Kiwis", "Grapes"};
    vc<pair<int, int>> wastes(k);

    for (auto &c : wastes) {
        cin >> c.fi >> c.se;
    }
    sort(all(wastes));

    for (int l = 0; l < t; ++l) {
        int i, j;
        cin >> i >> j;

        bool ok = 0;
        for (auto c : wastes) {
            if (c.fi == i && c.se == j) {
                ok = 1;
                break;
            }
        }

        if (ok) { cout << "Waste\n"; continue; }

        int waste_count = 0;
        for (auto c : wastes) {
            if (c.fi < i || (c.fi == i && c.se < j)) ++waste_count;
        }

        int total_before = (i-1) * m + (j-1) - waste_count;
        cout << plants[total_before % 3] << '\n';
    }

    Alhamdulillah;
}
// FM