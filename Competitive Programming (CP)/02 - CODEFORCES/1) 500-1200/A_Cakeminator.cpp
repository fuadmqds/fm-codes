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

    int R, C, ans = 0;
    cin >> R >> C;
    set<int> r, c;

    for (int i = 1; i <= R; ++i) {
        for (int j = 1; j <= C; ++j) {
            char k; cin >> k;
            if (k == 'S') {
                r.insert(i);
                c.insert(j);
                ans++;
            }
        }
    }

    cout << (R * C) - (r.size() * c.size()) << '\n';
    Alhamdulillah;
}
// FM

// Long version
/*
    int r, c;
    cin >> r >> c;

    vc<vc<pair<char, bool>>> rc(r, vc<pair<char, bool>> (c));
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j)
            cin >> rc[i][j].fi;
    }

    for (int i = 0; i < r; ++i) {
        bool cek = 1;
        for (int j = 0; j < c; ++j) {
            if (rc[i][j].fi == 'S') {
                cek = 0;
                break;
            }
        }
        if (cek) {
            for (int j = 0; j < c; ++j) 
                rc[i][j].se = 1;
        }
    }

    for (int j = 0; j < c; ++j) {
        bool cek = 1;
        for (int i = 0; i < r; ++i) {
            if (rc[i][j].fi == 'S') {
                cek = 0;
                break;
            }
        }
        if (cek) {
            for (int i = 0; i < r; ++i)
                rc[i][j].se = 1;
        }
    }
    
    int ans = 0;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (rc[i][j].se) {
                ans++;
            }
        }
    }
    cout << ans << endl;
*/