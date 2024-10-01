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

// O(t.(|n-m|+1).sqrt(x))
bool isPrime(int x) {
    if (x == 1) return false;
    for (int i = 2; i*i <= x; ++i) {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main() {
    Bismillah;

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        for (int i = n; i <= m; ++i) {
            if (isPrime(i))
                cout << i << '\n';
        }
        cout << '\n';
    }

    Alhamdulillah;
}
// FM 