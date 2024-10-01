#include <bits/stdc++.h>
typedef long long ll;
#define vc vector
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define Bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    Bismillah;
    
    string c = "codeforces";
    int t; 
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int cnt = 0;
        for (int i = 0; i < 10; i++) {
            if (s[i] != c[i]) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
// FM