#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int n, m;

    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            char c; cin >> c;
            if (c == 'C' || c == 'M' || c == 'Y') {
                cout << "#Color" << endl;
                return 0;
            }
        }
    }
    cout << "#Black&White" << endl;
    return 0;
}
// FM