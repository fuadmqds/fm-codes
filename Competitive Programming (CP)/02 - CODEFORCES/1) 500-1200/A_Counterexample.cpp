#include <bits/stdc++.h>
#define ll long long
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}

int main() {
    Bismillah;

    ll l, r;
    cin >> l >> r;

    bool yes = false;
    for (ll i = l; i <= r; i++) {
        for (ll j = i + 1; j <= r; j++) {
            if (gcd(i, j) != 1) {
                l = i; r = j;
                yes = true;
                break;
            }
        }
    }

    if (yes) {
        for (ll i = l + 1; i < r; i++) {
            if (gcd(l, i) == 1 && gcd(i, r) == 1) {
                cout << l << " " << i << " " << r << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
    return 0;
}
// FM

// Another solution (very efficient one)
/*
#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;

    long long l, r;
    cin >> l >> r;

    if (r - l < 2) {
        cout << -1 << endl;
        return 0;
    }

    if (l % 2 == 0) {
        cout << l << ' ' << l + 1 << ' ' << l + 2 << endl;
        return 0;
    }

    if (r - l > 2) {
        cout << l + 1 << ' ' << l + 2 << ' ' << l + 3 << endl;
        return 0;
    }

    cout << -1 << endl;
    return 0;
}
// FM
*/