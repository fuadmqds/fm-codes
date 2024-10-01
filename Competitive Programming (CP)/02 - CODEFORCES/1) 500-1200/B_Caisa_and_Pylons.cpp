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

    int n, hi, ans = 0, cur_energy = 0;
    cin >> n;

    vc<int> heights;
    heights.pb(0);

    for (int i = 1; i <= n; ++i) {
        cin >> hi;
        heights.pb(hi);
    }

    for (int i = 0; i < n; ++i) {
        cur_energy += heights[i] - heights[i + 1];
        if (cur_energy < 0) {
            ans += abs(cur_energy);
            cur_energy = 0;
        }
    }

    cout << abs(ans) << '\n';
    
    Alhamdulillah;
}
// FM