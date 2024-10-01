#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int n, m, c;
    while (cin >> n >> m >> c) {
        if (n == 0 && m == 0 && c == 0) break;
        else if (n-7 == 1 && m-7 == 1 && c == 1) cout << 1;
        else if (n-7 == 2 && m-7 == 1 && c == 1) cout << 1;
        else if (n-7 == 1 && m-7 == 2 && c == 1) cout << 1;
        else if (n-7 == 1 && m-7 == 1 && c == 0) cout << 0;
        else if (n-7 == 2 && m-7 == 1 && c == 0) cout << 1;
        else if (n-7 == 1 && m-7 == 2 && c == 0) cout << 1;
        else if (c == 1) {
            cout << fixed << setprecision(0) << ceil((n-7) * (m-7) * 0.5);
        } else {
            cout << fixed << setprecision(0) << floor((n-7) * (m-7) * 0.5);
        }
        cout << endl;
    }
    return 0;
}
// FM