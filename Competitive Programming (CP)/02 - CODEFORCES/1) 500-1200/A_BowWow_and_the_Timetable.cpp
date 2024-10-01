#include <bits/stdc++.h>
typedef long long ll;
#define vc vector
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define fi first
#define se second
#define all(v) v.begin(), v.end()
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    string s;
    cin >> s;

    int ls = s.length();
    bool ok = true;
    for (int i = 1; i < ls; i++) {
        if (s[i] == '1') {
            ok = false;
            break;
        }
    }

    if (ok) ls--;

    cout << (ls + 1) / 2 << endl;
    return 0;
}
// FM