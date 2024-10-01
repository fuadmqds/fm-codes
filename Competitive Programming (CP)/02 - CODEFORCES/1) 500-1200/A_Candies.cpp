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
    
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;

        int pow = 4, s = 3;
        while (n % s != 0) {
            s += pow;
            pow *= 2;
        }
        cout << n / s << endl;
    }
    return 0;
}
// FM