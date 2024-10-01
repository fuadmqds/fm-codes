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
    
    // range v is from 1 to n
    // use binary search

    int n, k, ans;
    cin >> n >> k;

    int l = 1, r = n, mid;
    while (l <= r) {
        mid = (l + r) / 2;
        ll res = mid, tmp = k;
        while (res / tmp) {
            res += mid / tmp;
            tmp *= k;
        }
        if (res < n) {
            l = mid + 1;
        } else {
            r = mid - 1;
            ans = mid;
        }
    }
    cout << ans << endl;
    return 0;
}
// FM