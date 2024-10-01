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
    
    int t; cin >> t;

    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (min(a, b) > max(c, d) || max(a, b) < min(c, d)) {
            puts("NO");
        } else {
            puts("YES");
        }
    }
    return 0;
}
// FM