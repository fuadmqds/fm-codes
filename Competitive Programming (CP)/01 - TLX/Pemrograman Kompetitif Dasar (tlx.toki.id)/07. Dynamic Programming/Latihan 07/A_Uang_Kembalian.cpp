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

// Time Complexity O(nk)

int main() {
    Bismillah;
    
    int n, k;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    cin >> k;
    int dp[k+1]; // State: minimum number of coins needed to get k
    fill(dp, dp + k + 1, 1e9);

    dp[0] = 0; // Base case
    for (int i = 1; i <= k; i++) {
        for (int j = 0; j < n; j++) {
            if (a[j] <= i) {
                dp[i] = min(dp[i], dp[i - a[j]] + 1); // Transition
            }
        }
    }

    cout << (dp[k] >= 1e9 ? -1 : dp[k]) << '\n';
    return 0;
}
// FM