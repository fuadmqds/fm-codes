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
    int n, a, b, ans = 0;
    cin >> n >> a >> b;

    if (a * 2 > b) {
        ans += b * (n / 2);
        if (n & 1)
            ans += a;
    } else {
        ans += a * n;
    }

    cout << ans << '\n';
}

int main() {
    Bismillah;
    
    int tc;
    cin >> tc;
    while (tc--) solve();
    
    Alhamdulillah;
}
// FM