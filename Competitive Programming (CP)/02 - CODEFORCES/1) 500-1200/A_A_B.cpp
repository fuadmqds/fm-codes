#include <bits/stdc++.h>
typedef long long ll;
#define vc vector
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define fi first
#define se second
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        cout << int(s[0]) + int(s[2]) - (2 * 48) << endl;
    }
    return 0;
}
// FM