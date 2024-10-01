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
    
    int n, x, a, b;
    bool ok = true;

    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (a == x || a == 7-x || b == x || b == 7-x) ok = false;
    }
    cout << (ok ? "YES" : "NO") << endl;
    return 0;
}
// FM