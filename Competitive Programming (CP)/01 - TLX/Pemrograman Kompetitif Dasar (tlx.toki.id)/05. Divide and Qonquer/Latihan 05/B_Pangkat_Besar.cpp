#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = 1e6;

// O(log b)
ll power(ll a, ll b) {
    if (b == 0) {
        return 1;
    }

    ll res = power(a, b / 2);
    
    res = res * res % MOD;

    if (b % 2) {
        return res * a % MOD;
    } else {
        return res;
    }
}

// Alternative
// O(log b)
// ll power(int a, int b) {
//     ll res = 1;
//     while (b) {
//         if (b & 1) {
//             res *= a;
//         }
//         res *= res;
//         b /= 2;
//     }
//     return res;
// }

int main() {
    ll a, b;
    cin >> a >> b;

    ll ans = power(a, b);
    string s = to_string(ans);

    if (ans == 0) {
        cout << "000000" << '\n';
    } else if (pow(a, b) > 999999 && s.size() < 6) {
        for (int i = 0; i < 6 - s.size(); ++i) {
            cout << 0;
        } 
        cout << ans << '\n';
    } else {
        cout << ans << '\n';
    }
    return 0;
}
// FM