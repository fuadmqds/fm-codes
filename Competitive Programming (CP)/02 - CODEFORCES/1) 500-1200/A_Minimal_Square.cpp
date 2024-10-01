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
    
    int t, a, b, L1, L2;
    cin >> t;

    while (t--) {
        cin >> a >> b;

        if (a < b) {
            L1 = (a + a) * (a + a);
            L2 = b * b;
        } else {
            L1 = (b + b) * (b + b);
            L2 = a * a; 
        }
        cout << max(L1, L2) << endl;
    }
    return 0;
}
// FM