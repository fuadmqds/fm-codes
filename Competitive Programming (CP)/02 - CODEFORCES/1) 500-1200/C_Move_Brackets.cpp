#include <bits/stdc++.h>
typedef long long ll;
#define vc vector
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define fi first
#define se second
#define all(v) v.begin(), v.end()
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;

    int t, n;
    cin >> t;

    while (t--) {
        string s;
        cin >> n >> s;

        int ans = 0, op = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') op++;
            else {
                op--;
                if (op < 0) {
                    op = 0;
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
// FM