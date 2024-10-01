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
    
    int n, ans = 0;
    string s;
    cin >> n >> s;

    vc<int> cnt(26, 0);

    for (char c : s) {
        if (c < 'a') {
            if (cnt[c - 65] == 0) {
                ans++;
            } else {
                cnt[c - 65]--;
            }
        } else {
            cnt[c - 97]++;
        }
    }
    
    cout << ans << endl;
    return 0;
}
// FM