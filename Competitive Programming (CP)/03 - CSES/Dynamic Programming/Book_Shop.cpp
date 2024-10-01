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

/*
State
dp[i][j] = maximum number of pages you can buy if you have 1 to i-th books,
and your total price of your purchages are at most j
Base Case
dp[0][j] = 0
Transition
if not buy
dp[i][j] = dp[i-1][j]
if buy
dp[i][j] = max(dp[i-1][j], dp[i-1][j-h[i]] + s[i])
*/

// Time Complexity O(NX)

int s[1001]; // Number of pages of each book
int h[1001]; // Price of the book
int dp[1001][100005];

int main() {
    Bismillah;

    int N, X;
    cin >> N >> X;

    for (int k = 1; k <= N; ++k) {
        cin >> h[k];
    }

    for (int k = 1; k <= N; ++k) {
        cin >> s[k];
    }

    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j <= X; ++j) {
            // if not buy
            dp[i][j] = dp[i - 1][j];
            // if buy
            if (j >= h[i]) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - h[i]] + s[i]);
            }
        }
    }

    cout << dp[N][X] << '\n';
    return 0;
}
// FM