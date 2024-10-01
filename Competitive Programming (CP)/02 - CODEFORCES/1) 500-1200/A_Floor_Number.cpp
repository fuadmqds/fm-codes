#include <bits/stdc++.h>
typedef long long ll;
#define vc vector
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int t, n, x;
    cin >> t;

    while (t--) {
        cin >> n >> x;

        if (n <= 2) {
            cout << 1 << endl;
        } else {
            cout << ((n + (x - 1) - 2) / x) + 1 << endl;
        }
    }
    return 0;
}
// FM