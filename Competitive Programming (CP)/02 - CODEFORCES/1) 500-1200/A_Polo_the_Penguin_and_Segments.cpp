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
    
    int n, k, val = 0, l, r;
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> l >> r;

        val += r - l + 1;
    }

    if (val % k == 0) {
        cout << 0 << endl;
    } else {
        cout << k - (val % k)<< endl;
    }
    return 0;
}
// FM