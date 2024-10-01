#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<bool> isPrime;

void SieveOfEratosthenes(ll lim) {
    isPrime.resize(lim + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (ll i = 2; i <= lim; i++) {
        if (isPrime[i]) {
            for (ll j = i * i; j <= lim; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

int main() {
    int n; cin >> n;

    SieveOfEratosthenes(1e6);

    while (n--) {
        ll x; cin >> x;

        ll sqrtX = sqrt(x);
        if (sqrtX * sqrtX == x && isPrime[sqrtX]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}