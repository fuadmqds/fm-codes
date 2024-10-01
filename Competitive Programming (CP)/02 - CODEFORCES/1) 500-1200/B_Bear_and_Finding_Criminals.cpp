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

    int n, a, l, r, ans = 0;
    cin >> n >> a;
    
    int t[n + 1];
    FOR(i, 1, n) cin >> t[i];

    l = r = a;
    while (l >= 1 || r <= n) {
        if (l >= 1 && r <= n) {
            if (t[l] == 1 && t[r] == 1) {
                if (l == r) ans++;
                else ans += 2;
            }
        } else if (l >= 1) {
            if (t[l] == 1) { ans++; }
        } else {
            if (t[r] == 1) { ans++; }
        }
        l--;
        r++;
    }
    cout << ans << '\n';

    Alhamdulillah;
}
// FM