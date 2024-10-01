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
#define out(a, b) cout << a << ' ' << b << endl;
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    Bismillah;
    
    int t, n, a;
    cin >> t;
    while (t--) {
        cin >> n;

        int s = 0;
        bool hv = 0;

        for (int i = 0; i < n; ++i) {
            cin >> a;
            s += a;
            if (a % 3 == 1) hv = 1;
        }

        if (s % 3 == 0) {
            cout << 0;
        } else if (s % 3 == 1) {
            cout << (hv ? 1 : 2);
        } else {
            cout << 1;
        }
        cout << '\n';
    }
    return 0;
}
// FM