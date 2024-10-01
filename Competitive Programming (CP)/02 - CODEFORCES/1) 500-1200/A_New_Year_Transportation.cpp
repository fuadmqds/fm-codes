#include <bits/stdc++.h>
typedef long long ll;
#define vc vector
#define fi first,
#define se second
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int n, t, cur = 1;;
    cin >> n >> t;

    if (cur == t) {
        puts("YES");
        return 0;
    }

    bool ans = false;
    for (int i = 1; i <= n-1; i++) {
        int a; cin >> a;
        if (i == cur) cur += a;
        if (cur == t) ans = true;
    }

    if (ans) puts("YES");
    else puts("NO");
    return 0;
}
// FM