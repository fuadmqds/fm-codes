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

    str x, y, z, ans = "";
    vc<int> cnt(101);
    cin >> x >> y >> z;

    if (x[1] == '>') { cnt[x[2]]++; }
    else { cnt[x[0]]++; }

    if (y[1] == '>') { cnt[y[2]]++; }
    else { cnt[y[0]]++; }
    
    if (z[1] == '>') { cnt[z[2]]++; }
    else { cnt[z[0]]++; }

    if (cnt['A'] == cnt['B'] || cnt['A'] == cnt['C'] || cnt['B'] == cnt['C']) {
        cout << "Impossible\n";
        return 0;
    }
    
    for (int i = 'A'; i <= 'C'; ++i) {
        if (cnt[i] == 2)
            ans += i;
    }
    for (int i = 'A'; i <= 'C'; ++i) {
        if (cnt[i] == 1)
            ans += i;
    }
    for (int i = 'A'; i <= 'C'; ++i) {
        if (cnt[i] == 0)
            ans += i;
    }

    cout << ans << '\n';

    Alhamdulillah;
}
// FM