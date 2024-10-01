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

int n, m;
char colour_before, colour_first, colour;

bool isValid() {
    FOR(i, 1, n) {
        cin >> colour_first;
        FOR(j, 1, m-1) {
            cin >> colour;
            if (colour != colour_first) 
                return 0;
        }
        if (i != 1) {
            if (colour_before == colour_first)
                return 0;
        }
        colour_before = colour_first;
    }
    return 1;
}

int main() {
    Bismillah;

    cin >> n >> m;
    cout << (isValid() ? "YES\n" : "NO\n");

    Alhamdulillah;
}
// FM