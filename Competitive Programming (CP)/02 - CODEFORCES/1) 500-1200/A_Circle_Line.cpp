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

// Zero-based
int main() {
    Bismillah;

    int n, s, t;
    cin >> n;

    vc<int> d(n);
    for (int i = 0; i < n; ++i) {
        cin >> d[i];
    }   

    cin >> s >> t;
    int a = 0, b = 0;
    for (int i = s-1; i != t-1; i = (i+1) % n) {
        a += d[i];
    }

    for (int i = s-1; i != t-1; i = (i+n-1) % n) {
        b += d[(i+n-1) % n];
    }

    cout << min(a, b) << '\n';

    Alhamdulillah;
}
// FM

// One-based
/*
int main() {
    Bismillah;

    int n, s, t;
    cin >> n;

    vc<int> d(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> d[i];
    }

    cin >> s >> t;
    int a = 0, b = 0;
    for (int i = s; i != t; i = i % n + 1) {
        a += d[i];
    }

    for (int i = s; i != t; i = (i - 2 + n) % n + 1) {
        b += d[(i - 2 + n) % n + 1];
    }

    cout << min(a, b) << '\n';

    Alhamdulillah;
}
// FM
*/