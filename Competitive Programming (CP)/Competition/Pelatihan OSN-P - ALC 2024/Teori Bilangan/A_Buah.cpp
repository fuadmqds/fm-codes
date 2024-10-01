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

ll gcd(ll x, ll y) {
    if (y == 0) return x;
    else return gcd(y, x % y);
}

int main() {
    Bismillah;

    ll n, a, b;
    cin >> n >> a >> b;

    ll lcm = a * b / gcd(a, b);
    cout << (lcm / a) + (lcm / b) << '\n';
    return 0;
}
// FM