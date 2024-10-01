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

    str n;
    cin >> n;

    if (n.size() == 1) {
        cout << 0;
        return 0;
    }

    int sum_digits = 0, ans = 1;
    for (char i : n) {
        sum_digits += (int) i - '0';
    }
    
    while (sum_digits >= 10) {
        int tmp = sum_digits;
        sum_digits = 0;
        while (tmp) {
            sum_digits += tmp % 10;
            tmp /= 10;
        }
        ans++;
    }

    cout << ans << '\n';

    Alhamdulillah;
}
// FM