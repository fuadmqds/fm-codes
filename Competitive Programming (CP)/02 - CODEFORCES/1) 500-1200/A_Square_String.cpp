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
    
    int t; cin >> t;

    while (t--) {
        string s; cin >> s;

        int ls = s.length();
        if (ls & 1) {
            cout << "NO" << endl;
            continue;
        }

        if (s.substr(0, ls / 2) == s.substr(ls / 2, ls / 2)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
// FM