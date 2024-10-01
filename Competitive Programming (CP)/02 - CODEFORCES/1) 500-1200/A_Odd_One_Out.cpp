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
    
    int t, a, b, c;
    cin >> t;

    while (t--) {
        cin >> a >> b >> c;

        if (a == b) cout << c << endl;
        else if (a == c) cout << b << endl;
        else if (b == c) cout << a << endl;
    }
    return 0;
}
// FM