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
    
    // h / (v / (d^2 * pi / 4) - e)
    double d, h, v, e, time = 0.0, pi = 3.141592653589793;
    cin >> d >> h >> v >> e;

    v = v / (d*d*pi / 4);
    
    if (v - e < 0.0) {
        cout << "NO\n";
        return 0;
    }

    time = h / (v - e);
    cout << "YES\n";
    cout << fixed << setprecision(12) << time << endl;
    return 0;
}
// FM