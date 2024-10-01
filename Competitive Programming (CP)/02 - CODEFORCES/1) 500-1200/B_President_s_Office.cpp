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

const int N = 105;

int main() {
    Bismillah;

    int n, m;
    char c, g[N][N];
    set<char> ans;

    cin >> n >> m >> c;
    
    FOR(i, 0, N-1) {
        FOR(j, 0, N-1) {
            g[i][j] = '.';
        }
    }

    FOR(i, 1, n) {
        FOR(j, 1, m) {
            cin >> g[i][j];
        }
    }

    FOR(i, 1, n) {
        FOR(j, 1, m) {
            if (g[i][j] == c) {
                if (g[i+1][j] != '.' && g[i+1][j] != c) 
                    ans.insert(g[i+1][j]);
                if (g[i][j+1] != '.' && g[i][j+1] != c) 
                    ans.insert(g[i][j+1]);
                if (g[i-1][j] != '.' && g[i-1][j] != c) 
                    ans.insert(g[i-1][j]);
                if (g[i][j-1] != '.' && g[i][j-1] != c) 
                    ans.insert(g[i][j-1]);
            }
        }
    }

    cout << ans.size() << '\n';

    Alhamdulillah;
}
// FM