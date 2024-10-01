#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int t, a, b, c;
    cin >> t;

    while (t--) {
        cin >> a >> b >> c;

        if (a + b == c) cout << '+' << endl;
        else cout << '-' << endl;
    }
    return 0;
}
// FM