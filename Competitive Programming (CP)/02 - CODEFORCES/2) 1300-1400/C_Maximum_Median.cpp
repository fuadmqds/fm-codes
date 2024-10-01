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
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
    Bismillah;
    
    int n, k;
    cin >> n >> k;

    vc<int> a(n);
    for (int &i : a) cin >> i;

    sort(all(a));

    // Binary search the answer
    int l = 1, r = 2e9, ans;
    while (l <= r) {
        int mid = ((ll)l + r) / 2;
        int move = 0;
        for (int i = n / 2; i < n; i++) {
            if (mid - a[i] > 0)
                move += mid - a[i];
            if (move > k) break;
        }
        if (move <= k) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << ans << '\n';
    return 0;
}
// FM