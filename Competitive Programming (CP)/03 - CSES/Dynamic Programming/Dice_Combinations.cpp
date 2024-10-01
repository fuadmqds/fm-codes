#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
#define vc vector
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define fi first
#define se second
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define out(a, b) cout << a << ' ' << b << endl
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0)

const ll MOD = 1e9 + 7;

/*
State
f(n) = number of way to construct n from throwing dice one or more times
Base Case
f(0) = 1
if n < 0, f(n) = 0
Transition
f(n) = f(n-1) + f(n-2) + f(n-3) + f(n-4) + f(n-5) + f(n-6)


f(0) = 1 [{}]
f(1) = 1 [{1}]
f(2) = 2 [{2}, {1, 1}]
f(3) = 4 [{1, 1, 1}, {1, 2}, {2, 1}, {3}]
...
*/

// Time Complexity O(n)

ll memo[1000005];

ll f(ll n) {
    if (n < 0) return 0;
    else if (n == 0) return 1;

    if (memo[n] != -1) {
        return memo[n];
    }

    memo[n] = (f(n-1) + f(n-2) + f(n-3) + f(n-4) + f(n-5) + f(n-6)) % MOD;
    return memo[n];
}

int main() {
    Bismillah;

    ll n;
    cin >> n;

    memset(memo, -1, sizeof(memo));
    cout << f(n) << '\n';
    return 0;
}
// FM