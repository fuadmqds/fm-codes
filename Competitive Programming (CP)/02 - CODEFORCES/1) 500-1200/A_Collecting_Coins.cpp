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
    
    int t;
    cin >> t;

    while (t--) {
        int n;
        vc<int> a(3);
        cin >> a[0] >> a[1] >> a[2] >> n;

        sort(all(a));
        n -= 2 * a[2] - a[1] - a[0];
        if (n < 0 || n % 3 != 0) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}
// FM