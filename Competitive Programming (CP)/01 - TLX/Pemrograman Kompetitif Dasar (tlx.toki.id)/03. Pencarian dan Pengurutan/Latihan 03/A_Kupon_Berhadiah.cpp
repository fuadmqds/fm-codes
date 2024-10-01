#include <bits/stdc++.h>
#define semoga_ac ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int n, x, Min = INT_MAX, ans;

void solve() {
    cin >> n >> x;

    while (n--) {
        int k; cin >> k;
        if (Min > abs(x - k)) {
            Min = abs(x - k);
            ans = k;
        } else if (Min == abs(x - k)) {
            ans = min(ans, k);
        }
    }
    cout << ans << endl;
}

int main() {
    semoga_ac;
    
    solve();
    return 0;
}
// FM