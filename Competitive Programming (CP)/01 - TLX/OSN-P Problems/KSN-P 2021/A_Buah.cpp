#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll x, ll y) {
    if (y == 0) return x;
    else return gcd(y, x % y);
}

int main() {
    ll n, a, b;
    cin >> n >> a >> b;

    ll lcm = a * b / gcd(a, b);
    cout << (lcm / a) + (lcm / b) << '\n';
    return 0;
}