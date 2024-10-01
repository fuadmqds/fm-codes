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

// O(TN)

int main() {
    Bismillah;

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vc<int> a(n);
        vc<int> ans;

        for (int& i : a) {
            cin >> i;
        }

        str s;
        cin >> s;
        int l = 0, r = n - 1;
        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == 'L') l++;
            else r--;
        }

        int res = a[l] % m;
        ans.pb(res);
        for (int i = n - 2; i >= 0; --i) {
            if (s[i] == 'L') {
                res = (res * a[--l]) % m;
            }
            else {
                res = (res * a[++r]) % m;
            }
            ans.pb(res);
        }

        for (int i = n - 1; i >= 0; --i) {
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
// FM