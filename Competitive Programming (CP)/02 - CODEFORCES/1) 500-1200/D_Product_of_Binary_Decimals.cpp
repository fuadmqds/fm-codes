#include <bits/stdc++.h>
typedef long long ll;
#define vc vector
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define fi first
#define se second
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

const int MAX = 1e5 + 7;

vc<int> binaryDecimals;

bool ok(int x) {
    if (x == 1) return true;
    bool ans = false;
    for (int i : binaryDecimals) {
        if (x % i == 0) {
            ans |= ok(x / i);
        }
    }
    return ans;
}

int main() {
    Bismillah;

    for (int i = 2; i < MAX; i++) {
        int cur = i;
        bool bad = false;
        while (cur) {
            if (cur % 10 > 1) {
                bad = true;
                break;
            }
            cur /= 10;
        }
        if (!bad) binaryDecimals.pb(i);
    }

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << (ok(n) ? "YES\n" : "NO\n");
    }
    return 0;
}
// FM