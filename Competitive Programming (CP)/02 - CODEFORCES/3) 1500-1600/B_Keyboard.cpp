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

int n, m, x, q, ans = 0;
str T;
vc<bool> ch(26);
vc<bool> isCan(26);
vc<pair<int, int>> shift;

// Check if a character at (a, b) can be accessed using a shift key within distance x
bool check(int a, int b) {
    for (auto T : shift) {
        double tmp = sqrt(pow(a - T.fi, 2) + pow(b - T.se, 2));
        if (ceil(tmp) <= x)
            return true;
    }
    return false;
}

int main() {
    Bismillah;

    // Read dimensions n, m and distance x
    cin >> n >> m >> x;
    vc<vc<char>> key(n + 1, vc<char> (m + 1));

    // Read the keyboard layout and mark characters
    FOR(i, 1, n) {
        FOR(j, 1, m) {
            cin >> key[i][j];
            if (key[i][j] == 'S')
                shift.pb(make_pair(i, j));
            else
                ch[key[i][j] - 'a'] = 1;
        }
    }

    // Check if normal characters can be accessed using shift within x distance
    FOR(i, 1, n) {
        FOR(j, 1, m) {
            if (key[i][j] == 'S') continue;
            if (check(i, j))
                isCan[key[i][j] - 'a'] = 1;
        }
    }

    // Read the number of queries q and the string T
    cin >> q >> T;
    bool can = 1;
    
    // Check each character in T
    FOR(i, 0, q-1) {
        if (T[i] >= 'a') { // lowercase
            if (!ch[T[i] - 'a']) {
                can = 0;
                break;
            }
        } 
        else { // uppercase
            if (!ch[tolower(T[i]) - 'a'] || shift.empty()) {
                can = 0;
                break;
            }
            if (!isCan[T[i] - 'A'])
                ans++;
        }
    }

    // Output the result based on the validation
    cout << (can ? ans : -1) << '\n';

    Alhamdulillah;
}
// FM
