#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;

    string a, b;
    cin >> a >> b;
    if (a == b) {
        cout << -1 << endl;
    } else {
        cout << max(a.size(), b.size()) << endl;
    }
    return 0;
}
// FM