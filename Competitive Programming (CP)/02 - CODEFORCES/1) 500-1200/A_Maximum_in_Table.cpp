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

int val_table(int n, int m) {
    return (n == 1 || m == 1 ? 1 : val_table(n - 1, m) + val_table(n, m - 1));
}

int main() {
    Bismillah;
    int n; cin >> n; cout << val_table(n, n) << '\n';
    Alhamdulillah;
}
// FM

/*
int n, a[12], ans = 1;
cin >> n;
for (int i = 1; i <= n; ++i) {
    a[1][i] = a[i][1] = 1;
}
for (int i = 2; i <= n; ++i) {
    for (int j = 2; j <= n; ++j) {
        a[i][j] = a[i - 1][j] + a[i][j - 1];
        ans = max(ans, a[i][j]);
    }
}
cout << ans << '\n';
*/

/*
int n;
cin >> n;
--n;
int ans = 1;
for (int i = 1; i <= n; i++)
    ans *= i + n, ans /= i;
cout << ans;
*/