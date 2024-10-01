#include <bits/stdc++.h>
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;

        cout << (s[0] == 'a' || s[1] == 'b' || s[2] == 'c' ? "YES" : "NO") << endl;
    }
    return 0;
}
// FM