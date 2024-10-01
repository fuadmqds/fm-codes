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

int main() {
    Bismillah;
    
    int n, a, b, res;
    cin >> n >> a >> b;

    if (b == 0) {
        cout << a << "\n";
        return 0;
    }

    if (b < 0) {
        if (a + b > 0) {
            res = a + b;
        } else {
            res = n - abs(a + b) % n;
        }
    } else {
        res = (a + b) % n;
    }

    cout << (res == 0 ? n : res) << "\n";
    return 0;
}
// FM