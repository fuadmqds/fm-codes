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
    
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;

        vc <int> a(n);
        ll sum = 0, min = LONG_LONG_MAX;

        for (int &i : a) {
            cin >> i;
            if (min > i) min = i;
        }

        for (int i = 0; i < n; i++) {
            sum += a[i] - min;
        }
        cout << sum << endl;
    }
    return 0;
}
// FM