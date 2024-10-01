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

const int N = 101;

vc<int> edg[N];
int cross[N], color[N];
bool vis[N];

void dfs(int nd, int c) {
    vis[nd] = 1;
    color[nd] = c;
    for (int i : edg[nd]) {
        if (!vis[i])
            dfs(i, !c);
        else {
            if (color[nd] == color[i])
                cross[i] = 1;
        }
    }
}

int main() {
    Bismillah;

    int n, m;
    cin >> n >> m;
    FOR(i, 1, m) {
        int a, b;
        cin >> a >> b;
        edg[a].pb(b);
        edg[b].pb(a);
    }

    FOR(i, 1, n) {
        if (!vis[i])
            dfs(i, 0);
    }

    int ans = 0;
    FOR(i, 1, n) {
        if (cross[i])
            ans++;
    }

    ans /= 2;
    if ((n - ans) % 2)
        ans++;
    cout << ans << '\n';

    Alhamdulillah;
}
// FM

/*
const int N = 101;

vc<int> edges[N];
bool vis[N];
vc<int> v;

void dfs(int nd) {
    vis[nd] = 1;
    v.pb(nd);
    for (int i : edges[nd]) {
        if (!vis[i])
            dfs(i);
    }
}

int main() {
    Bismillah;

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        edges[u].pb(v);
        edges[v].pb(u);
    }

    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        if (!vis[i]) {
            v.clear();
            dfs(i);
            bool cycle = 1;
            for (int x : v) {
                if (edges[x].size() != 2) {
                    cycle = 0;
                }
            }
            if (cycle && v.size() & 1) {
                ++ans;
            }
        }
    }

    if ((n - ans) & 1) {
        ++ans;
    }
    cout << ans << '\n';

    Alhamdulillah;
}
// FM
*/