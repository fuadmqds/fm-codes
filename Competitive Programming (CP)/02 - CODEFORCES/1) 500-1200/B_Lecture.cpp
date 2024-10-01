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

    int n, m;
    cin >> n >> m;
    vc<pair<str, str>> ab(m);
    FOR(j, 0, m-1) {
        str a, b;
        cin >> a >> b;
        ab[j] = {a, b};
    }
    vc<str> c(n);
    for (str &s : c) cin >> s;
    FOR(i, 0, n-1) {
        FOR(j, 0, m-1) {
            if (c[i] == ab[j].fi) {
                if (ab[j].fi.size() > ab[j].se.size()) {
                    c[i] = ab[j].se;
                    break;
                }
            }
        }
    }
    for (str s : c) 
        cout << s << ' ';

    Alhamdulillah;
}
// FM