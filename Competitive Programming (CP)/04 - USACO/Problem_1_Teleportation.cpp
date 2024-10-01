#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    freopen("teleport.in", "r", stdin);
	freopen("teleport.out", "w", stdout);

    int a, b, x, y, ans = 999;
    cin >> a >> b >> x >> y;

    if (ans > abs(a - b)) {
        ans = abs(a - b);
    }
    if (ans > abs(a - x) + abs(b - y)) {
        ans = abs(a - x) + abs(b - y);
    }
    if (ans > abs(b - x) + abs(a - y)) {
        ans = abs(b - x) + abs(a - y);
    }

    cout << ans << "\n";
    return 0;
}
// FM