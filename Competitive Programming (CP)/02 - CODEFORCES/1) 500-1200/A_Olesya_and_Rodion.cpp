#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int n, t;
    cin >> n >> t;

    if (n == 1 && t == 10) {
        cout << -1;
        return 0;
    }
    
    for (int i = 0; i < n; i++) {
        if (i == 0 && t == 10) {
            cout << t;
            i++;
        } else if (i == 0) {
            cout << t;
        } else {
            cout << 0;
        }
    }
    return 0;
}
// FM