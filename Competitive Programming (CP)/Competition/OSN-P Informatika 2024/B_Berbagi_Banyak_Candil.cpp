#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll b, c, d;
    cin >> b >> c >> d;

    if (c == 0) {
        cout << b << '\n';
        return 0;
    } 
    if (c == d) {
        if (b > c) 
            cout << b - c << '\n';
        else 
            cout << "0\n";
        return 0;
    }

    ll ans = 0;
    for (ll x = 1; x <= b; ++x) {
        if (c % x == d) {
            ans++;
        }
    }

    cout << ans << '\n';
    return 0;
}