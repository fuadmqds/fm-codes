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
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define ROF(i, a, b) for (int i = a - 1; i >= b; --i)
#define Bismillah cin.tie(0)->sync_with_stdio(0)
#define Alhamdulillah return 0

void solve() {
    int cnt[3];
    memset(cnt, 0, sizeof(cnt));
    FOR(i, 0, 9) {
        char c;
        cin >> c;
        cnt[c - 'A']++;
    }
    FOR(i, 0, 3) {
        if (cnt[i] == 2) {
            if (i == 0)
                cout << "A\n";
            else if (i == 1)
                cout << "B\n";
            else
                cout << "C\n";
        }
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