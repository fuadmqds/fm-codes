#include <bits/stdc++.h>
typedef long long ll;
#define vc vector
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define mp make_pair
#define fi first
#define se second
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int t;
    cin >> t;

    while (t--) {
        int n, c2 = 0, c3 = 0;
        cin >> n;

        while (n % 2 == 0) {
            c2++;
            n /= 2;
        }
        while (n % 3 == 0) {
            c3++;
            n /= 3;
        }

        if (n == 1 && c2 <= c3) {
            cout << c3 + (c3 - c2) << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
// FM