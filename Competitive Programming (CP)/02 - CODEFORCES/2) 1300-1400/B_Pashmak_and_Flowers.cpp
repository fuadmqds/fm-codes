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
    
    ll n, a, MIN = INT_MAX, MAX = INT_MIN;
    map<ll, ll> hz;
    cin >> n;

    for (ll i = 0; i < n; i++) {
        cin >> a;
        ++hz[a];

        if (a < MIN) MIN = a;
        if (a > MAX) MAX = a;
    }
    
    ll ways;
    if (MIN == MAX) ways = hz[MIN] * (hz[MAX] - 1) / 2;
    else ways = hz[MIN] * hz[MAX];

    cout << MAX - MIN << ' ' << ways << endl;
    return 0;
}
// FM