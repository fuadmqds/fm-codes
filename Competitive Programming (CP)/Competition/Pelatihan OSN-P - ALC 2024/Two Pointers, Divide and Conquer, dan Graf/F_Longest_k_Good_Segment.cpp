#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
#define vc vector
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define fi first
#define se second
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define out(a, b) cout << a << ' ' << b << endl
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
    Bismillah;
    
    int n, k;
    cin >> n >> k;

    int a[n + 1];
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    int l = 1, r = 1, i = 1, j = 1, cnt = 0;
    map<int, int> hz;
    while (r <= n) {
        hz[a[r]]++;
        if (hz[a[r]] == 1) cnt++;
        while (cnt > k) {
            hz[a[l]]--;
            if (hz[a[l]] == 0) cnt--;
            l++;
        }
        if (j - i + 1 < r - l + 1) {
            i = l; j = r;
        }
        r++;
    }

    out(i, j);
    return 0;
}
// FM