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
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    Bismillah;
    
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vc<ll> a(n);

        for (ll &i : a) cin >> i;
        
        for (int i = 1; i < n; i++) {
            if (a[i] <= a[i-1]) {
                a[i] = (a[i-1] / a[i] + 1) * a[i];
            }
        }
        
        cout << a[n-1] << '\n';
    }
    return 0;
}
// FM