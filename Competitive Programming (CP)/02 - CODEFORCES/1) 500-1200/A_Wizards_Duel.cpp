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
    
    int l, p, q;
    cin >> l >> p >> q;
    cout << fixed << setprecision(4) << (double) (p * l) / (p + q) << '\n';

    Alhamdulillah;
}
// FM

/*
let x be the distance of the spell impulses from harry's place
the distance of spell impulses will always be the same
t1 = t2
x / p = (l - x) / q
qx = pl - px
qx + px = pl
x(p + q) = pl
x = pl / (p + q)
*/