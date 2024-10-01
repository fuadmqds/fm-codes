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
#define yes(a, b, c) cout << "YES\n" << a << ' ' << b << ' ' << c << '\n'
#define no cout << "NO\n"

void solve() {
    int x, y, z;
    cin >> x >> y >> z;
    if (x == y && x == z && y == z)
        yes(x, y, z);
    else if (x == y && x > z)
        yes(x, z, 1);
    else if (x == z && x > y) 
        yes(x, y, 1);
    else if (y == z && y > x) 
        yes(y, x, 1);
    else
        no;

    // vector<int> a(3);
    // for (int &i : a) cin >> i;
    // sort(all(a));
    // if (a[1] != a[2])
    //     cout << "NO\n";
    // else 
    //     cout << "YES\n" << a[0] << ' ' << a[0] << ' ' << a[2] << '\n';
}

int main() {
    Bismillah;

    int t;
    cin >> t;
    while (t--) solve();

    Alhamdulillah;
}
// FM

