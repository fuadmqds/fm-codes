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
        int n; cin >> n;
        string s; cin >> s;
        bool ok = true;

        if (n != 5) ok = false;
        else {
            int c[5] = {0};
            for (int i = 0; i < n; i++) {
                if (s[i] == 'T') c[0]++;
                else if (s[i] == 'i') c[1]++;
                else if (s[i] == 'm') c[2]++;
                else if (s[i] == 'u') c[3]++;
                else if (s[i] == 'r') c[4]++;
            }
            for (int i = 0; i < n; i++) {
                if (c[i] != 1) {
                    ok = false;
                    break;
                } 
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}
// FM