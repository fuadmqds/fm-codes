#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
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
    
    ull a, b;
    cin >> a >> b;

    if (a % 11 == 0) {
        a /= 11;
    } else {
        b /= 11;
    }
    
    ull ans = a * b;
    cout << ans << '\n';
    return 0;
}
// FM