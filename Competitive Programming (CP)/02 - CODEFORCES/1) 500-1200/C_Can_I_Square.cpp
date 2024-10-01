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
    ll n, a, sum = 0;
    cin >> n;
    for (ll i = 0; i < n; ++i) {
        cin >> a;
        sum += a;
    }
    ll sqrtSum = sqrt(sum);
    if (sqrtSum * sqrtSum == sum) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    Bismillah;

    int t;
    cin >> t;
    while (t--) solve();

    Alhamdulillah;
}
// FM