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

        int c1 = (n + 2) / 3, c2 = n / 3;
        if (c1 + c2 * 2 == n) {
            cout << c1 << ' ' << c2 << endl;
        } else {
            int temp = c1;
            c1 = c2;
            c2 = temp;
            if (c1 + c2 * 2 == n) {
                cout << c1 << ' ' << c2 << endl;
            }
        }
    }
    return 0;
}
// FM