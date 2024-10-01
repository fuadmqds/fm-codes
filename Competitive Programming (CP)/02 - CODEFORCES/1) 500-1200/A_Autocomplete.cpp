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
    
    str s, ans;
    int n;
    cin >> s >> n;

    for (int i = 0; i < n; ++i) {
        str t;
        cin >> t;
        if (t.size() >= s.size() && t.substr(0, s.size()) == s) {
            if (ans.empty()) ans = t;
            else ans = min(ans, t);
        }
    }

    if (ans.empty()) ans = s;
    cout << ans << '\n';
    return 0;
}
// FM