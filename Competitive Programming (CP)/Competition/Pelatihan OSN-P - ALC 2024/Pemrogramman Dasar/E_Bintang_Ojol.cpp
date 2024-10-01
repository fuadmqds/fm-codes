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
    
    ll n, m;
    cin >> n >> m;

    if (n == 0 && m == 0) {
        cout << "-1 -1"\n;
    }

    if (n == 1 && )

    if (n > m * 5 || n < m) {
        cout << "-1 -1\n";
        return 0;
    }

    ll tmp = n;
    for (int i = 0; i < 4; i++) {
        tmp -= m;
    }

    cout << (tmp <= 0 ? 0 : tmp) << ' ' <<  n / 5 << endl;
    return 0;
}
// FM