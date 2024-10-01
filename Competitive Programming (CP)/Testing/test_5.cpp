#include <algorithm>
#include <array>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <complex>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

using namespace std;
using ll = long long;
using ull = unsigned long long;
using db = long double;
using str = string;

#define vc vector
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define mp make_pair
#define fi first
#define se second
#define in insert
#define ub upper_bound
#define lb lower_bound
#define pii pair<int,int>
#define pll pair<ll,ll>

#define nl cout << '\n';
#define test cout << 't'; nl
#define out(a, b) cout << a << ' ' << b; nl
#define each(p) for (auto i : p) cout << i << ' '; nl

#define all(v) begin(v), end(v)
#define rall(v) rbegin(v), rend(v)
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define ROF(i, a, b) for (int i = a - 1; i >= b; --i)
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0)

const ll MOD = 1e9 + 7;

int main() {
    Bismillah;

    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);

    int l = 0, r = 4;
    vc<int> a{0, 1, 2, 3, 4};
    out(a[++l], a[r--])
    return 0;
}
// FM

/* -----------
 *   /\_/\
 *  (= ._.)
 *  / >0  \>1
 * -----------
*/