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
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    Bismillah;

    int t;
    cin >> t;
    while (t--) {
        str a, b; // decimal a and decimal b
        cin >> a >> b;

        // Adding zeros
        while (a.size() < b.size()) {
            a = "0" + a;
        }

        // Remove unnecessary (the same) length
        while (!a.empty() && a[0] == b[0]) {
            a.erase(0, 1);
            b.erase(0, 1);
        }

        // In order to get the max difference we need to:
        // 1. fill decimal a from index 1 - k (1 - a.size) with nines
        // 2. fill decimal b from index 1 - k (1 - b.size) with zeros
        // 3. Thus, remain the first index of decimal a and b
        // 4. Add the absolut value of those to the answer
        int ans = max(0, (int)a.size() - 1) * 9 + (b[0] - a[0]);
        cout << ans << '\n';
    }
    return 0;
}
// FM