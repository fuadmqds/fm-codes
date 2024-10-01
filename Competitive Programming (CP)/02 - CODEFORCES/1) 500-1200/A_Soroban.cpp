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

    if (n == 0) {
        cout << "O-|-OOOO\n";
        return 0;
    }

    while (n) {
        int d = n % 10;
        if (d < 5)
            cout << "O-|";
        else {
            cout << "-O|";
            d -= 5;
        }

        FOR(i, 1, d)
            cout << "O";
        cout << "-";
        FOR(i, 1, 4-d)
            cout << "O";
        
        cout << "\n";
        n /= 10;
    }

    Alhamdulillah;
}
// FM