#include <bits/stdc++.h>
typedef long long ll;
#define vc vector
#define fi first,
#define se second
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int t, n, x, y;
    cin >> t;

    while (t--) {
        cin >> n;

        y = n % 2020;
        x = (n - y) / 2020 - y;

        cout << (x >= 0 ? "YES" : "NO") << endl;
    }
    return 0;
}
// FM

/*
The math
n = 2020 * x + 2021 * y
n = 2020 * x + 2020 * y + y
n = 2020(x + y) + y

n = 2020(x + y) + y
n - y = 2020(x + y)
(n - y) / 2020 = x + y
x = (n - y) / 2020 - y
*/