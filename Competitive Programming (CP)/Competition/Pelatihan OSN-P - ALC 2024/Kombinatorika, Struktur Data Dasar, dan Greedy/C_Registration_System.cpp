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
#define out(a, b) cout << a << ' ' << b << endl;
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    Bismillah;
    
    int n;
    cin >> n;

    map<str, int> mp;

    for (int i = 0; i < n; ++i) {
        str p;
        cin >> p;

        cout << (mp[p] == 0 ? "OK" : p + to_string(mp[p])) << '\n';
        mp[p]++;
    }
    return 0;
}
// FM