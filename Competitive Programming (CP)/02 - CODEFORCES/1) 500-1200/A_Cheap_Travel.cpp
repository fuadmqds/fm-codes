#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    vector <int> dp(n + 1, 9999999);
    dp[0] = 0;

    for (int i = 0; i <= n; i++) {
        if (dp[i] == 9999999) continue;

        if (i + 1 <= n) dp[i+1] = min(dp[i+1], dp[i] + a);
        if (i + m <= n) dp[i+m] = min(dp[i+m], dp[i] + b);
        else dp[n] = min(dp[n], dp[i] + b);
    }

    cout << dp[n] << endl;
    return 0;
}