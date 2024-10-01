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

    int n;
    cin >> n;
    str s[n];

    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }

    bool ok = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i][0] == s[i][1] && s[i][0] == 'O') {
            s[i][0] = '+';
            s[i][1] = '+';
            ok = 1;
            break;
        } else if (s[i][3] == s[i][4] && s[i][3] == 'O') {
            s[i][3] = '+';
            s[i][4] = '+';
            ok = 1;
            break;
        }
    }
    
    if (!ok) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        for (int i = 0; i < n; ++i) {
            cout << s[i] << '\n';
        }
    }

    Alhamdulillah;
}
// FM