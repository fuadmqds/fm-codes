#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int t; cin >> t;
    while (t--) {
        int x, y, n;
        cin >> x >> y >> n;
        
        int r = n % x;
        if (r > y) {
            cout << n - abs(r - y) << endl;
        } else if (r < y) {
            cout << n - (x - abs(r - y)) << endl;
        } else {
            cout << n << endl;
        }
    }
    return 0;
}
// FM