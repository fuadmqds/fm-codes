#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int t; cin >> t;
    while (t--) {
        int ar[3];
        for (int i = 0; i < 3; i++) {
            cin >> ar[i];
        }
        sort(ar, ar + 3);
        cout << ar[1] << endl;
    }
    return 0;
}
// FM