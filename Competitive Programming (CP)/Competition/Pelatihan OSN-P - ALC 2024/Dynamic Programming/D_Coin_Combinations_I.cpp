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
dp[i] = number of ways to make sum i using given coins
Base Case
dp[0] = 1
Transition
for c[j] = the j-th coins
dp[i + c[j]] = (dp[i + c[j]] + dp[i]) % MOD
*/

// 

int n, x, c[101];
ll dp[1000005];

int main() {
    Bismillah;

    cin >> n >> x;
    for (int i = 0; i < n; ++i) {
        cin >> c[i];
    }

    dp[0] = 1; // Base Case
    for (int i = 0; i <= x; ++i) {
        if (dp[i] != 0) {
            for (int j = 0; j < n; ++j) {
                if (c[j] + i <= x) {
                    dp[c[j] + i] += dp[i];
                    dp[c[j] + i] %= MOD;
                }
            }
        }
    }

    cout << dp[x] << '\n';
    return 0;
}
// FM

/*
simulation
{2, 3, 5} // array coins

{1 0 0 0 0 0 0 0 0 0} // array dp in base case

i = 0
coin 2
{1 0 1 0 0 0 0 0 0 0}
coin 3
{1 0 1 1 0 0 0 0 0 0}
coin 5
{1 0 1 1 0 1 0 0 0 0}
i = 1 skip
i = 2
coin 2
{1 0 1 1 2 1 0 0 0 0}
coin 3
{1 0 1 1 2 1 0 0 0 0}
coin 5
{1 0 1 1 2 1 0 2 0 0}
so on until i = x
*/