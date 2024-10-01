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
    
    ll n;
    cin >> n;

    cout << n << ' ';
    while (n > 1) {
        if (n & 1) {
            n *= 3;
            n += 1;
        } else {
            n /= 2;
        }
        cout << n << ' ';
    }
    return 0;
}
// FM